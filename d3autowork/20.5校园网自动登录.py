import webbrowser
import pyautogui as pg
import time
# 谷歌版
# webbrowser.open('http://210.45.240.105/')
# time.sleep(3)
# fw = pg.getActiveWindow()
# fw.maximize()
# pg.moveTo(1281,549,duration=1)
# pg.click(1281,549)
# pg.write('2022211057',0.25)
# pg.moveTo(1274,640,duration=1)
# pg.click(1274,640)
# pg.write('195259',0.25)
# pg.moveTo(1423,764,duration=1)
# pg.click(1423,764)
# time.sleep(5)
# pg.moveTo(2158,2,duration=1)
# pg.click(2158,2)
# pg.moveTo(1080,720,duration=1)
# print("Done.")

# edge版
webbrowser.open('http://210.45.240.105/')
time.sleep(3)
fw = pg.getActiveWindow()
fw.maximize()
pg.moveTo(1459,697,duration=1)
pg.click(1459,697)
time.sleep(5)
pg.moveTo(2158,2,duration=1)
pg.click(2158,2)
pg.moveTo(1080,720,duration=1)
print("Done.")