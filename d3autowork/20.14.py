import pyautogui as pg
"""弹窗"""
# assert pg.alert('hello', "hello2")== 'OK' 
# print(pg.confirm('continue?','ask'))# OK Cancel
# print(pg.prompt("name?","??"))
# print(pg.password('password?',"??"))
assert pg.prompt('name')==''

'''
点cancel才是none，
什么都不输是空字符，看第六行的那个
'''