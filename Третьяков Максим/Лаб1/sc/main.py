from GUI import *
import tkinter as tk
import calc

if __name__ == '__main__':
    # Вводим параметры функции


    # создаем экземпляр класса calc и передаем значения параметров функции
    foo = calc.Calc()
    foo.get_foo_param()
    foo.do_some_math()
    foo.print_table()
    print('Для выхода из программы введите close /n')
    print('Для изменения значения ячейки в столбце X используйте команду change_x [№] [new X] /n')
    print('Для изменения значения ячейки в столбце Y используйте команду change_y [№] [new Y] /n')
    while (True):
        try:
            # вывод графика в отдельном окне
            app = GUI(foo.get_x(), foo.get_y())
            app.mainloop()

            buf = str(input(''))
            buf = buf.split(' ')
            if (buf[0] == 'change_x'):
                foo.change_x(int(buf[1]) - 1, float(buf[2]))
            elif (buf[0] == 'change_y'):
                foo.change_y(int(buf[1]) - 1, float(buf[2]))
            elif (buf[0] == 'close'):
                break
            foo.print_table()
        except IOError:
            print('Ошибка ввода')
