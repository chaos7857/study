from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.action_chains import ActionChains
import time
import requests
from bs4 import BeautifulSoup
import lxml
url = 'https://www.bilibili.com/video/BV1Eb411u7Fw/?spm_id_from=333.337.search-card.all.click&vd_source=3ae9dfcc16ba84113c717163327346c9'
page = requests.get(url)
soup = BeautifulSoup(page.content, 'html.parser')
duration = soup.find_all(class_="duration")
print(duration)
# wb = webdriver.Edge('msedgedriver')

# wb.get('https://www.bilibili.com/video/BV1Eb411u7Fw/?spm_id_from=333.337.search-card.all.click&vd_source=3ae9dfcc16ba84113c717163327346c9')


# duration = wb.find_elements(By.CLASS_NAME, "duration")

# print(duration)