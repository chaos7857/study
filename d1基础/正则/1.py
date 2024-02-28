import re
message = "call me at 415-555-1011 tomorrow. 415-555-9999 is my office."
# 用re.compile()创建一个regex对象
phonenumber = re.compile(r'\d\d\d-\d\d\d-\d\d\d\d')
# 向regex对象的search()方法传入想查询的字符串，它返回一个match对象
mo = phonenumber.search(message)
# 调用match对象的group()方法，返回实际匹配文本的字符串
print(mo.group())