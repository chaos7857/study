import matplotlib.pyplot as plt

# squares = [1,2,3,4,5,6,7,8,9,10]
squares = range(1,1000)
y = [x*x for x in squares]
fig, ax = plt.subplots()
# ax.plot(squares, y)
ax.scatter(squares, y, c=y, cmap=plt.cm.Blues, s=10)


plt.show()
