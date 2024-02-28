import webbrowser
import pyautogui as pg
import time
webbrowser.open('http://210.45.240.105/')
time.sleep(2)
pg.click(1462,692)
time.sleep(5)
pg.click(2158,2)
pg.moveTo(1080,720,duration=1)
print("Done.")