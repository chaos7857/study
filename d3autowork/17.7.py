import threading
def ppp(start,end):
    for i in range(start,end+1):
        print(i)
ts = []
for i in range(0,140,10):
    start = i
    end = i+9
    t = threading.Thread(target=ppp, args=(start,end))
    ts.append(t)
    t.start()