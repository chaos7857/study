import re
message = "call me at 415-555-1011 tomorrow. 415-555-9999 is my office."
# ��re.compile()����һ��regex����
phonenumber = re.compile(r'\d\d\d-\d\d\d-\d\d\d\d')
# ��regex�����search()�����������ѯ���ַ�����������һ��match����
mo = phonenumber.search(message)
# ����match�����group()����������ʵ��ƥ���ı����ַ���
print(mo.group())