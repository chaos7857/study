import time 
import pyperclip
import requests
import pyautogui as pg
'''
TODO 单词怎么统一编号
    现在想到比较简单的方法是读取上次最后一个单词的最后一号
TODO 要不要有区分，比如说今天的就今天，就是按照日期区分,现在是直接进去自己取名字
'''

name = pg.prompt('请输入文件名：','请输入')

word = ''
while(True):
    #  暂停一下，防止频率过高
    time.sleep(2)
    #  死循环获取剪切板内容并与上次比较
    if pyperclip.paste() != word:
        word = pyperclip.paste()

        #  向有道发送get请求，获取意思
        url = 'https://dict.youdao.com/suggest?num=5&ver=3.0&doctype=json&cache=false&le=en&q='+word
        res = requests.get(url)

        assert res.status_code == 200
        if(res.json()["result"]["code"]!=200):
            continue

        ents = res.json()["data"]["entries"]
        
        # for ent in ents:
        #     print(ent["entry"]+":  "+ent["explain"])

        #  将得到的结果保存到 积累.txt 中
        file = open(name+'.txt', 'a')
        file.write(ents[0]["entry"]+":  "+ents[0]["explain"]+"\n")
        file.write("\t"+"形似词："+"\n")

        for i in range(1,len(ents)):
            file.write("\t\t"+ents[i]["entry"]+":  "+ents[i]["explain"]+"\n")
        file.close() 
        print("done.")


# if __name__ == '__main__':
