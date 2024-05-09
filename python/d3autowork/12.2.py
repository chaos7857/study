'''选出hfut首页上的news'''
import requests
import bs4

res = requests.get('https://www.hfut.edu.cn/')

'''print(res.status_code)
print(len(res.text))
print(res.text[:250])'''

assert res.status_code == 200

playFile = open('HHH.html','wb')
for chunk in res.iter_content(100000):
    playFile.write(chunk)
playFile.close()
print('Done.')

exampleFile = open('HHH.html','rb')
soup = bs4.BeautifulSoup(exampleFile.read(),'html.parser')
elems = soup.select('#part1 > div')
print(elems[0])

'''
file = open('hfutnews.html','w')
file.write(elems[0])
file.close()
'''