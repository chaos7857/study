# This Python file uses the following encoding: gbk
import matplotlib.pyplot as plt

input_values = [1, 2, 3, 4, 5]
squares = [1, 4, 9, 16, 25]

# plt.style.use('seaborn')
# plt.style.use('seaborn-dark')
plt.style.use('fivethirtyeight')

fig, ax = plt.subplots()
ax.plot(input_values, squares, linewidth=3)

plt.rcParams['font.sans-serif']=['SimHei']
plt.rcParams['axes.unicode_minus']=False

ax.set_title("平方数", fontsize=24)
ax.set_xlabel("值", fontsize=14)
ax.set_ylabel("值的平方", fontsize=14)

ax.tick_params(axis='both', labelsize=14)

# ax.plot(squares)
plt.show()
