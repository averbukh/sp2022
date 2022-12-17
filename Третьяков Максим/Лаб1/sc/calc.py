import numpy as np


# Класс Calc занимается всеми вычислениями, связанными с фунцкией
class Calc(object):
    # a1-a3, b1-b3 -- параметры фунцкии
    # x0 - начало значений x
    # x1 - конец значений x
    # dx - шаг изменения x
    a1, a2, a3, b1, b2, b3, x0, x1, dx = 1., 1., 1., 1., 1., 1., 1., 1., 1.
    y_list = np.array([])  # список значений х
    x_list = np.array([])  # список значений y

    def set_atr(self, _a1, _a2, _a3, _b1, _b2, _b3, _x0, _x, _dx):
        self.a1 = _a1
        self.a2 = _a2
        self.a3 = _a3
        self.b1 = _b1
        self.b2 = _b3
        self.x0 = _x0
        self.x1 = _x
        self.dx = _dx

    def __init__(self, _a1, _a2, _a3, _b1, _b2, _b3, _x0, _x, _dx):
        self.a1 = _a1
        self.a2 = _a2
        self.a3 = _a3
        self.b1 = _b1
        self.b2 = _b3
        self.x0 = _x0
        self.x1 = _x
        self.dx = _dx

    def __init__(self):
        pass

    # сама функция
    def foo(self, x):
        return self.a1 * np.sin(self.b1 * x) + self.a2 * np.sin(self.b2 * x) + self.a3 * np.sin(self.b3 * x)

    def get_x(self):
        return self.x_list

    def get_y(self):
        return self.y_list

    def get_foo_param(self):
        self.a1 = float(input('Введите a1 '))
        self.a2 = float(input('Введите a2 '))
        self.a3 = float(input('Введите a3 '))
        self.b1 = float(input('Введите b1 '))
        self.b2 = float(input('Введите b2 '))
        self.b3 = float(input('Введите b3 '))
        self.x0 = float(input('Введите начальное значение X '))
        self.x1 = float(input('Введите конечное значение X '))
        self.dx = float(input('Введите шаг X '))

    # вычисление значений функции по заданными параметрам
    def do_some_math(self):
        for i in np.arange(self.x0, self.x1, self.dx):
            self.x_list = np.append(self.x_list, i)
            self.y_list = np.append(self.y_list, self.foo(i))

    # печать таблицы функции в консоль
    def print_table(self):
        size = self.x_list.size
        print("%10s %10s" % ('X', 'Y'))
        for i in range(size):
            print("%2i %10f %10f" % (i+1,self.x_list[i], self.y_list[i]))
        print("\n")

    # замена значений таблицы
    def change_x(self, index , new_x):
        self.x_list[index] = new_x

    def change_y(self, index, new_y):
        self.y_list[index] = new_y