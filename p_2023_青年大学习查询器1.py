import requests

def edit_url(section_number):
    a = 241 + 2 * section_number
    url = "http://dxx.ahyouth.org.cn/api/peopleRankStage?table_name=reason_stage"+ str(a) + "&level1=%E7%9B%B4%E5%B1%9E%E9%AB%98%E6%A0%A1&level2=%E5%90%88%E8%82%A5%E5%B7%A5%E4%B8%9A%E5%A4%A7%E5%AD%A6&level3=%E7%AE%A1%E7%90%86%E5%AD%A6%E9%99%A2%E5%9B%A2%E5%A7%94&level4=%E4%BF%A1%E6%81%AF%E7%AE%A1%E7%90%86%E4%B8%8E%E4%BF%A1%E6%81%AF%E7%B3%BB%E7%BB%9F%E4%B8%93%E4%B8%9A2022%E7%BA%A71%E7%8F%AD"
    return url

def get_undone_name(section_number):
    response = requests.get(edit_url(section_number)).json()
    response_st = requests.get(edit_url(2)).json()
    list_st = []
    list_n = []
    for name in response_st['list']['list']:
        list_st.append(name['username'])
    for name in response['list']['list']:
        list_n.append(name['username'])

    list = [y for y in list_st if not y in list_n]
    
    print("SUCCESSFUL_EXIT!")
    print('='*50)
    if len(list)==0:
        print("%d人已经全部完成！"%len(list_n))
    else:    
        for value in list:
            print(value)
        print('-'*50)
        print("注意核对当前完成人数�?%d�?"%len(list_n))
    print('='*50)

if __name__ == "__main__":
    while 1:
        n = int(input("请输入要查询的期数："))
        get_undone_name(n)
