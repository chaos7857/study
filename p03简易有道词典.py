import requests

def translate(q):
    url = "https://dict.youdao.com/suggest?num=5&ver=3.0&doctype=json&cache=false&le=en"
    headers = {
            'User-Agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/98.0.4758.102 Safari/537.36 Edg/98.0.1108.56'
        }
    data = {"q": q}
    response = requests.post(url=url, headers=headers, data=data).json()
    return response
    


def analyze(response):
    print("%s的意思是："%response['data']['entries'][0]['entry'])
    print(response['data']['entries'][0]['explain']+"\n\n")
    print("附赠以下类似词：")
    for key in response['data']['entries']:
        if key == response['data']['entries'][0]:
            continue
        print(key['entry'], end=': ')
        print(key["explain"])

    print("SUCCESSFUL_OVER!")

def main():
    q = input("请输入要查询的单词：")
    result = translate(q)
    analyze(result)



if __name__ == '__main__':
    main()
