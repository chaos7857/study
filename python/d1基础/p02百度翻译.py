import requests

def spider(url,headers,data):

    response = requests.post(url=url, headers=headers, data=data).json()  # 对目标url发起post请求
    for key in response['data'][0]:
        print(key,response['data'][0][key])


def main():

    url = 'https://fanyi.baidu.com/sug'  #需要请求的url
    headers = {  #进行UA伪装
        'User-Agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/98.0.4758.102 Safari/537.36 Edg/98.0.1108.56'
    }
    while True:
        kw = input("输入需要查询的单词：")

        data = {     #post请求携带的参数
            'kw':kw
        }
        spider(url=url,headers=headers,data=data)  #调用自定义函数spider

if __name__ == '__main__':

    main()
