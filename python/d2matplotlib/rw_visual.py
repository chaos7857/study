import matplotlib.pyplot as plt
from random_walk import RandomWalk
rw = RandomWalk(600)
rw.walk()
fig, ax = plt.subplots()
ax.scatter(rw.x,rw.y, c=rw.y, cmap=plt.cm.Greens, edgecolors='none')
ax.set_title("randomWalk")
plt.show()