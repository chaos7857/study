'''打开复制的网站'''
import webbrowser as wb
import pyperclip as pc
# wb.open("www.baidu.com")

url = pc.paste()
# print(url)http://news.hfut.edu.cn/info/1011/63461.htm
wb.open(url)