import json
import time
new_date_str = {}
flag = True
# with open("date.json", "r") as f:
#     dates = json.load(f)
#     if len(dates) == 0:
#         flag = False


def re_new_date():
    with open("date.json", "r") as f:
        new_dates = json.load(f)
    return new_dates


def direct():
    print("*" * 79)
    print("【1】 新增名片\t【2】 查询名片\t【3】 显示全部\t【0】 退出")
    print("*" * 79)


def new_card():
    new_name_str = input("请输入姓名： ")
    if flag:
        with open("date.json", "r") as f:
            dates = json.load(f)
        for date in dates:
            if date["name"] == new_name_str:
                print("已存在此人相关信息了，请查询进行操作！")
        else:
            phone_number_str = input("请输入手机号： ")
            qq_number_str = input("请输入QQ号码： ")
            email_str = input("请输入邮箱： ")
            new_date_str["name"] = new_name_str
            new_date_str["phone"] = phone_number_str
            new_date_str["QQ"] = qq_number_str
            new_date_str["email"] = email_str
            dates.append(new_date_str)
            with open("date.json", "w") as fi:
                json.dump(dates, fi)
            print("【%s】添加成功" % new_name_str)


search_goal_name = ""
find_dict = {}


def search_card():
    global search_goal_name
    search_goal_name = input("请输入要查询的人： ")
    re_dates = re_new_date()
    for goal_date in re_dates:
        if goal_date["name"] == search_goal_name:
            global find_dict
            find_dict = goal_date
            print_title()
            print_info(goal_date)
            print('')
            print("-" * 79)
            print("【1】 修改  【2】 删除  【0】 退出")
            actions()
            break
    else:
        print("没有关于【%s】的信息，请使用【新增名片】添加" % search_goal_name)


def show_all():
    new_dates = re_new_date()
    if len(new_dates) == 0:
        print("【还没有任何名片哦】")
    else:
        print_title()
        
        for date in new_dates:
            print("%s\t%s\t%s\t%s" % (date["name"],
                                                  date["phone"],
                                                  date["QQ"],
                                                  date["email"]))
            print("")


def print_title():
    print('=' * 79)
    for name in ["姓名", "电话", "QQ", "邮箱"]:
        print(name, end="\t\t")
    print('')
    print('=' * 79)


def print_info(dic):
    """
打印信息
    :param dic: the dict whose (name phone qq email) you need to print
    """
    print(dic["name"], end="\t")
    print(dic["phone"], end="\t")
    print(dic["QQ"], end="\t")
    print(dic["email"], end="\t")


def actions():
    while True:
        action = input("要进行的操作： ")
        if action == "1":
            change_date(find_dict)
            break
        elif action == "2":
            print("【该操作无法撤回，请再次确认！（1）确定 （0）取消】")
            re_check = input("您的决定是： ")
            if re_check == "1":
                del_dict_in_list(search_goal_name)
                break
            elif re_check == "0":
                break
            else:
                print("【没有这个选项哦！】")
                time.sleep(0.3)
                break
        elif action == "0":
            break
        else:
            print("【没有这个选项哦！】")
            time.sleep(0.3)
            break


def del_dict_in_list(del_goal_name):
    """
删除列表中的指定字典
    :param del_goal_name: 要删除的字典的name项
    """
    leave = []
    re_date = re_new_date()
    for item in re_date:
        if item["name"] != del_goal_name:
            leave.append(item)
    with open("date.json", "w") as fil:
        json.dump(leave, fil)
    print("【%s删除成功！】" % search_goal_name)


def change_date(changing_dict):

    def change_name():
        changed_name = input("请输入修改后的姓名（没有改动请按回车）： ")
        if len(changed_name) > 0:
            changing_dict["name"] = changed_name

    def change_phone():
        changed_phone = input("请输入修改后的手机号码（没有改动请按回车）： ")
        if len(changed_phone) > 0:
            changing_dict["phone"] = changed_phone

    def change_qq():
        changed_qq = input("请输入修改后的QQ号码（没有改动请按回车）： ")
        if len(changed_qq) > 0:

            changing_dict["QQ"] = changed_qq

    def change_email():
        changed_email = input("请输入修改后的邮箱号码（没有改动请按回车）： ")
        if len(changed_email) > 0:
            changing_dict["email"] = changed_email

    del_dict_in_list(changing_dict["name"])
    change_name()
    change_phone()
    change_qq()
    change_email()
    new_dates = re_new_date()
    new_dates.append(changing_dict)
    with open("date.json", "w") as fil:
        json.dump(new_dates, fil)
    print("【[%s]修改成功】" % search_goal_name)
