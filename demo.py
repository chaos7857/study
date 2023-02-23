from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.select import Select
import time
wd = webdriver.Edge("msedgedriver")
wd.implicitly_wait(5)
# 知道id
# wd.get("https://www.bilibili.com/")
# element = wd.find_element(By.CSS_SELECTOR, "#i_cecream > div > div:nth-child(2) > div.search-header > div.search-input > div > div > div > input")


# 不知道id的
# wd.get("https://cn.bing.com/?mkt=zh-CN")
# element = wd.find_element(By.ID, "sb_form_q")
# 其他的方法
# class
# tagname




wd.get("https://www.bilibili.com/")


# ����1:输入
wd.find_element(By.CSS_SELECTOR, "#nav-searchform > div.nav-search-content > input").send_keys('宋浩')
# ����2:点击
wd.find_element(By.CSS_SELECTOR, '#nav-searchform > div.nav-search-btn > svg').click()
wd.implicitly_wait(5)
# ����3:下拉式的选择
# a = Select(wd.find_element(By.CSS_SELECTOR, "#bili-header-container > div > div > ul.left-entry > li:nth-child(1) > a > div"))
# a.select_by_value(value)
# a.select_by_visible_text("鬼畜")


# 切换窗口

# 解决iframe嵌套的网页
# wd.switch_to.frame("iframe_name")/或者写element（快多了)
# .........click()
wd.switch_to.default_content()

# 点击操作后切换到了新的标签
# 链接发生变化就要写
# for window_handle in wd.window_handles:
#     wd.switch_to.window(window_handle)
#     if '内容' in wd.title:
#         break

time.sleep(10)
# wd.quit()