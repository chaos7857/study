import qrcode
import requests

url = "https://www.bilibili.com/video/BV1Eb411u7Fw/?p=14&spm_id_from=pageDriver&vd_source=3ae9dfcc16ba84113c717163327346c9"

response = requests.get(url)

img1 = qrcode.make("https://www.bilibili.com/video/BV1Eb411u7Fw/?p=14&spm_id_from=pageDriver&vd_source=3ae9dfcc16ba84113c717163327346c9")

# with open("./wncs/a.png", "wb")as f:
#     img.save(f)

# qr = qrcode.QRCode()

img1.save("./wncs/qrcode.png")


img2 = qrcode.make("./wncs/qrcode.png")
img2.save("./wncs/qrcode2.png")