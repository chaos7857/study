from selenium import webdriver
import time
from selenium.webdriver.common.by import By

browser = webdriver.Edge(r'C:\Users\Admin\Desktop\能不用手绝不动脑子\msedgedriver.exe')
browser.get('https://baidu.com')
browser.implicitly_wait(2)
usr = browser.find_element(By.ID, 'kw')
usr.send_keys('华为')
usr.submit()

time.sleep(10)