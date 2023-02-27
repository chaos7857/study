import requests

url = "https://www.bilibili.com/video/BV1Eb411u7Fw/?p=14&spm_id_from=pageDriver&vd_source=3ae9dfcc16ba84113c717163327346c9"

r = requests.get(url)

print(r.text)