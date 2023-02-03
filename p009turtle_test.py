import turtle as t
import random
x = 1

color_range = ["red", "pink", "purple", "green", "blue", "yellow", "black", "orange"]
pen_size = [10, 20, 30, 40, 50, 60, 70, 80]
t.pu()

t.goto(-400, 0)
t.pd()
while x <= 20:
    a = random.randint(0, 7)
    b = random.randint(0, 7)
    t.color(color_range[a])
    t.pensize(b)
    print(color_range[a])
    for i in range(20):
        t.forward(20)
        t.right(18)
    t.forward(50)
    x += 1

