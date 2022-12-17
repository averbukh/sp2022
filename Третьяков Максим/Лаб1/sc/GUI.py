import tkinter as tk
from tkinter import ttk
import calc
import matplotlib
from matplotlib.figure import Figure
from matplotlib.backends.backend_tkagg import (
    FigureCanvasTkAgg,
    NavigationToolbar2Tk
)
import numpy as np


class GUI(tk.Tk):
    def __init__(self, x, y):
        super().__init__()

        self.title('Lab 1')
        x_arr = x
        y_arr = y

        # выводим график
        figure = Figure(figsize=(10,5), dpi = 100)
        figure_canvas = FigureCanvasTkAgg(figure, self)
        NavigationToolbar2Tk(figure_canvas, self)
        axes = figure.add_subplot()
        axes.plot(x_arr, y_arr)
        figure_canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)
