#include <QAxObject>
#include <QAxWidget>
#include <QAxBase>
#include <QMessageBox>
#include <QDir>

// Класс, считающий функцию и выводящий график
class Graph {
private:
    QAxObject *excel, *workbook, *workbooks, *worksheet, *worksheets, *cell;
    double a1,a2,a3,b1,b2,b3,x0,x1,xd;
    bool fileExist;
public:

    Graph()  { // конструктор, получает доступ к коллекциям объектов Excel
        if(!QFileInfo::exists(QDir::currentPath() + "\\Graph.xlsx"))
        {
            QMessageBox::about(nullptr, "Ошибка!", "Отсутствует файл шаблона графиков Graph.xlsx\n"
                                                "Файл должен находиться в папке с программой!");
            fileExist = false;
            return;
        }
        fileExist = true;

        excel = new QAxObject("Excel.Application");
        excel->setProperty("Visible", false );
        excel->setProperty("DisplayAlerts", 0);

        workbooks = excel->querySubObject("WorkBooks");
        // Открываем шаблон графика
        // работаем в текущем каталоге программы
        workbook = workbooks->querySubObject("Open (const QString&)",  QDir::currentPath() + "\\Graph.xlsx");

        worksheets = workbook->querySubObject("Sheets");
        worksheet = worksheets->querySubObject( "Item(int)", 1);
        worksheet->dynamicCall( "Select()");

    }

    ~Graph() { // деструктор, закрывает объекты
        workbook->dynamicCall("Close (Boolean)", false);
        excel->dynamicCall("Quit()");
        delete excel;
    }

    // статический метод проверки наличия файла шаблона
    bool checkTemplate() {
        return fileExist;
    }

    void getParam(const double& a1_in, const double& a2_in, const double& a3_in,
                  const double& b1_in, const double& b2_in, const double& b3_in,
                  const double& x0_in, const double& x1_in, const double& xd_in) {
        a1 = a1_in;  a2 = a2_in;  a3 = a3_in;
        b1 = b1_in;  b2 = b2_in;  b3 = b3_in;
        x0 = x0_in;  x1 = x1_in;  xd = xd_in;
    }

    // Метод расчёта функции
    void DoCalc(){
        std::vector<double> x_vec, y_vec;
        int steps = int(round((x1-x0)/xd));
        double x = x0;

        while(steps--) {
            x_vec.push_back(x);
            y_vec.push_back(calc_y(x));
            x += xd;
        }

        for(int i=0; i<x_vec.size(); ++i){
            setXY(i, x_vec.at(i), y_vec.at(i));
        }

        setParam(a1,a2,a3,b1,b2,b3,x0,x1,xd);
    }

    double calc_y(double x) {
        return a1*sin(b1*x) + a2*sin(b2*x) + a3*sin(b3*x);
    }

    // Пишем x, y и их номер в массиве
    void setXY(const int& n, const double& x, const double& y) {
        // Пишем x              адрес ячейки           значение
        setValue(QString("B" + QString::number(n+2)), QVariant(x));
        // Пишем y              адрес ячейки           значение
        setValue(QString("C" + QString::number(n+2)), QVariant(y));
    }

    // Пишем параметры и диапазон в таблицу
    void setParam(const double& a1, const double& a2, const double& a3,
                  const double& b1, const double& b2, const double& b3,
                  const double& x0, const double& x1, const double& xd) {
        setValue(QString("F2"), QVariant(a1));
        setValue(QString("F3"), QVariant(a2));
        setValue(QString("F4"), QVariant(a3));
        setValue(QString("F5"), QVariant(b1));
        setValue(QString("F6"), QVariant(b2));
        setValue(QString("F7"), QVariant(b3));
        setValue(QString("I2"), QVariant(x0));
        setValue(QString("I3"), QVariant(x1));
        setValue(QString("I4"), QVariant(xd));
    }

    // метод записи значения в таблицу
    void setValue(const QString& addr, const QVariant& val) {
        cell = excel->querySubObject("Range(const QString&)", addr);
        cell->dynamicCall( "SetValue(const QVariant&)", val);
    }

    // метод, отображающий окно Excel c табоицей
    void show() {
        excel->setProperty("Visible", true );
    }

    // метод вывода на печать
    void print()
    {
        worksheet->dynamicCall("PrintOut");
    }
};
