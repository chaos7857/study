'''
详细版
做一个对比剪切板内容，将其上单词通过有道进行查询，将内容输出至 积累.txt
至少可以用来查词汇，也不是很拉跨
看论文的时候可以用，
TODO 我希望的是能够显示出来而不单单是保存到一个文档里，那样我怎么看呢
TODO 至于从剪切板读取，这是现在能想到的方法，如果可以直接搜索选中文字，那自然是更好的
TODO 对于得到的翻译，是不是可以再过滤一下，但是呢，作为一个轻量级的单词检索程序，这已经足够了
TODO 能不能显示在另外一块屏幕上，笑死，那不就是现在的版本吗
'''

import time 
import pyperclip
import requests
import bs4

word = 'clear'
while(True):
    #  死循环获取剪切板内容并与上次比较
    if pyperclip.paste() != word:
        word = pyperclip.paste()

        #  向有道发送get请求，获取意思
        url = 'https://youdao.com/result?word='+word+'&lang=en'
        res = requests.get(url)
        assert res.status_code == 200
        soup = bs4.BeautifulSoup(res.text, 'html.parser')
        elems = soup.select('#catalogue_author > div.dict-book > div > div.trans-container > ul')
        if len(elems)<=0:
            continue

        print(elems[0])
        ans = elems[0].getText()
        # print(word +'\t\t' +ans+'\n')

        #  将得到的结果保存到 积累.txt 中
        file = open('积累.txt', 'a')
        file.write(word +'\t\t' +ans+'\n')
        file.close()

    #  暂停一下，防止频率过高
    time.sleep(2)