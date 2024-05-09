'''
这是一个延时截屏小工具
jianGe表示间隔时间，图片会默认存储进当前文件夹
'''
import pyautogui as pg
import time 
i=0
jianGe = 1
while(True):
    im = pg.screenshot()
    im.save('screenshot+'+i+'.png')
    time.sleep(jianGe)
    i+=1

