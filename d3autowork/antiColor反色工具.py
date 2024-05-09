'''
将图片颜色反转
'''
from PIL import Image
img = Image.open("d3autowork/test4.png")
print(img)
anti_pixel = []
for i in range(img.height):# 0-27
    for j in range(img.width):
        pixel = img.getpixel((i,j))
        anti_pixel.clear()
        for k in range(3):
            anti_pixel.append(255-pixel[k])
        img.putpixel((i,j),tuple(anti_pixel))
img.save("d3autowork/anti_t4.png")
print("done.")