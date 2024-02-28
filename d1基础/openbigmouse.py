from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.action_chains import ActionChains
import time

wb = webdriver.Edge('msedgedriver')

wb.get('https://www.bilibili.com/')
wb.implicitly_wait(5)
wb.find_element(By.CSS_SELECTOR, "#nav-searchform > div.nav-search-content > input").send_keys("宋浩\r")
wb.find_element(By.CSS_SELECTOR, "#nav-searchform > div.nav-search-btn").click()

for window_handle in wb.window_handles:
    wb.switch_to.window(window_handle)
    if '宋浩' in wb.title:
        break

wb.find_element(By.CSS_SELECTOR, "#i_cecream > div > div:nth-child(2) > div.search-content--gray.search-content > div > div > div > div.video.i_wrapper.search-all-list > div > div:nth-child(1) > div > div.bili-video-card__wrap.__scale-wrap > a > div > div.bili-video-card__image--wrap > picture > img").click()


for window_handle in wb.window_handles:
    wb.switch_to.window(window_handle)
    if '《高等数学》同济版 全程教学视频（宋浩老师）_哔哩哔哩_bilibili' in wb.title:
        break

yiiy = wb.find_element(By.CSS_SELECTOR, "#bilibili-player > div > div > div.bpx-player-primary-area > div.bpx-player-video-area > div.bpx-player-video-perch > div > video")
ActionChains(wb).move_to_element(yiiy).perform()
beisu = wb.find_element(By.CSS_SELECTOR,"#bilibili-player > div > div > div.bpx-player-primary-area > div.bpx-player-video-area > div.bpx-player-control-wrap > div.bpx-player-control-entity > div.bpx-player-control-bottom > div.bpx-player-control-bottom-right > div.bpx-player-ctrl-btn.bpx-player-ctrl-playbackrate.bpx-state-show > div")
ActionChains(wb).move_to_element(beisu).perform()
wb.find_element(By.CSS_SELECTOR, '#bilibili-player > div > div > div.bpx-player-primary-area > div.bpx-player-video-area > div.bpx-player-control-wrap > div.bpx-player-control-entity > div.bpx-player-control-bottom > div.bpx-player-control-bottom-right > div.bpx-player-ctrl-btn.bpx-player-ctrl-playbackrate.bpx-state-show > ul > li:nth-child(2)').click()
time.sleep(60)