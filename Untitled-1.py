import requests
n = int(input())
a = 241 + 2 * n
url = "http://dxx.ahyouth.org.cn/api/peopleRankStage?table_name=reason_stage" + str(a) + "&level1=%E7%9B%B4%E5%B1%9E%E9%AB%98%E6%A0%A1&level2=%E5%90%88%E8%82%A5%E5%B7%A5%E4%B8%9A%E5%A4%A7%E5%AD%A6&level3=%E7%AE%A1%E7%90%86%E5%AD%A6%E9%99%A2%E5%9B%A2%E5%A7%94&level4=%E4%BF%A1%E6%81%AF%E7%AE%A1%E7%90%86%E4%B8%8E%E4%BF%A1%E6%81%AF%E7%B3%BB%E7%BB%9F%E4%B8%93%E4%B8%9A2022%E7%BA%A71%E7%8F%AD"
requests.get(url).json()
