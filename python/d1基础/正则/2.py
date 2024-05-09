import re
message = "call me at 415-555-1011 tomorrow. 415-555-9999 is my office."
# 注意哦，   
# .^$*+?{}[]\|()
# 为特殊符号，得加\
phonenumber = re.compile(r'(\d\d\d)-\d\d\d-\d\d\d\d')

mo = phonenumber.search(message)

# 0或不写是全部，1是第一组

print(mo.group(1))