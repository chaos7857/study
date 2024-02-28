from random import choice
class RandomWalk:
    def __init__(self, num=500) -> None:
        self.num = num

        self.x = [0]
        self.y = [0]


    def walk(self) -> None:
        while len(self.x) < self.num:
            dx = choice([-1,1])*choice([0,1,2,3,4])
            dy = choice([-1,1])*choice([0,1,2,3,4])
            if dx == 0 and dy == 0:
                continue
            self.x.append(self.x[-1] + dx)
            self.y.append(self.y[-1] + dy)