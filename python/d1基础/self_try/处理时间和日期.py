import time
ticks = time.time()
print(ticks, "/////", time)
# print(time.strftime("当前时间为%Y-%m-%d %H:%M:%S", time.localtime()))
print("")
localtime = time.localtime(time.time())
print("当前时间为： ", localtime)
localtime = time.asctime(time.localtime(time.time()))
localtime1 = time.asctime()
print(localtime)
print(localtime1)

