/*
1 指定传入的类型----- 直接显示对象的数据类型
2 参数模板化
3 整个类模板化


通过类模板创建的对象，可以有三种方式向函数中传参
使用比较广泛的是第一种：指定传入的类型；
*/

#include"myhead.h"

template<class T1, class T2>
class Person 
{
public:
    Person(T1 name, T2 age):mname(name), mage(age)
    {
    }
    void showPerson()
    {
        cout << this -> mname << ":" << this -> mage << endl;
    }
    T1 mname;
    T2 mage;
};

// 1 指定传入的类型----- 直接显示对象的数据类型
void printPerson1(Person <string, int>&p)
{
    p.showPerson();
}
void test1()
{
    Person <string, int>p("tom", 100);
    printPerson1(p);
}

// 2 参数模板化
template<class T1, class T2>
void printPerson2(Person <T1, T2>&p)
{
    p.showPerson();
    cout << "t1类型为" << typeid(T1).name() << endl;
    cout << "t2类型为" << typeid(T2).name() << endl;
}
void test2()
{
    Person <string, int>p("tom", 100);
    printPerson2(p);
}

// 3 整个类模板化
template<class T>
void printPerson3(T&p)
{
    p.showPerson();
}
void test3()
{
    Person <string, int>p("tom", 100);
    printPerson3(p);
}