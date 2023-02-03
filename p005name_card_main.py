import name_card_tools as t
print("【欢迎使用CC简易名片系统！】")
# print("=" * 88)
while True:
    t.direct()
    command = input("要执行的操作： ")
    if command == "1":
        t.new_card()
    elif command == "2":
        t.search_card()
    elif command == "3":
        t.show_all()
    elif command == "0":
        print("【已退出，欢迎再次使用！】")
        break
    else:
        print("【无此选项请重新输入!】")
