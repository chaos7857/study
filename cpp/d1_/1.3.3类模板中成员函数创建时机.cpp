// 类模板中函数成员在调用时才创建

// 普通类中是一开始就创建的





#include"myhead.h"


class Person1
{
public:
    void show();
};
class Person2
{
public:
    void show();
};

template<class T>
class Myclass
{
public:
    T obj;
    void func1()
    {
        obj.show();// 这里现在还不知道调用的是啥, 只有运行起来才指定调用的是哪个show
    }
};

