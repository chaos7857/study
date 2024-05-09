from tkinter import *
import time


def xin_label():
    t = time.asctime()
    global xin
    s = Label(xin, text="完成%s" % t)
    s.pack()


xin = Tk()
b1 = Button(xin, text="按下", command=xin_label)
b1.pack()
xin.mainloop()
