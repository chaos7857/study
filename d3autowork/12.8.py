'''
目标网站：http://210.45.240.105/a79.htm?cmd=login&switchip=222.195.2.4&mac=c4:75:ab:5e:51:82&ip=10.4.10.142&essid=HFUT%2DWiFi&apname=1%23NanLou-606&apgroup=hfut-1%23SuSheLou&url=http%3A%2F%2Fwww%2Emsftconnecttest%2Ecom%2Fredirect
需求：自动填写表单并登录校园网
目前难以实现，一直都是无法交互，在相同配置下，采用相同方法提交其他表单明明可以
可能是那个false搞的鬼
直接用pyautogui来实现就行了
'''
from selenium import webdriver
import time
# from selenium.webdriver.common.by import By

browser = webdriver.Edge(r'C:\Users\Admin\Desktop\能不用手绝不动脑子\msedgedriver.exe')
# browser = webdriver.Chrome()
# type(browser)
# browser.get('http://210.45.240.105/a79.htm?cmd=login&switchip=222.195.2.4&mac=c4:75:ab:5e:51:82&ip=10.4.10.142&essid=HFUT%2DWiFi&apname=1%23NanLou-606&apgroup=hfut-1%23SuSheLou&url=http%3A%2F%2Fwww%2Emsftconnecttest%2Ecom%2Fredirect')
browser.get('http://bing.com')
browser.implicitly_wait(2)
# usr = browser.find_element_by_name('DDDDD')
# psd = browser.find_element_by_name('upass')
# usr.send_keys('2022211057')
# psd.send_keys('195259')

psd = browser.find_element_by_id('sb_form_q')
psd.send_keys('111')
psd.submit()
time.sleep(10)
#edit_body > div.edit_row.ui-resizable-autohide > div.edit_loginBox.random.loginuse.loginuse_pc.ui-resizable-autohide > form > input:nth-child(4)
