from PIL import Image, ImageDraw

dogImg = Image.open('./dog.png')

# width, height = dogImg.size
# print(dogImg.size)

'''
face = dogImg.crop((333,344,565,560))
dogImg.paste(face,(0,0))
dogImg.save('pastedImg.png')c:\Users\Admin\Desktop\projects\Pytorch_study\mnist识别\src\test4.jpg
'''


# dogImg.rotate(90).save('rotate90.png')

# dogImg.transpose(Image.FLIP_TOP_BOTTOM).save('vertical_flip.png')

# print(dogImg.getpixel((0,0)))

'''
for x in range(100):
    for y in range(100):
        dogImg.putpixel((x,y),(255,0,0,255))
dogImg.save('putPix.png')
'''


draw = ImageDraw.Draw(dogImg)
'''
draw.line([0,0, 199,0, 199,199, 0,199, 0,0], fill='black')
dogImg.save('line.png')
'''

'''
draw.rectangle((200,300,600,600), fill='blue',outline='red')
dogImg.save('rectangle.png')
'''

'''
draw.ellipse((200,300,600,600), fill='green',outline='red')
dogImg.save('ellipse.png')
'''


'''
draw.polygon([57,87,79,62,94,85,120,90,103,113], fill='brown')
dogImg.save('polygon.png')
'''