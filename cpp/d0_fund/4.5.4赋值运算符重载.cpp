/*
cpp至少给一个类添加4个 函数
    1 默认构造函数（无参，函数体空）
    2 默认析构函数（无参，函数体空）
    3 默认拷贝构造函数，对属性进行拷贝
    
    4 赋值运算符 operator= 对属性进行值拷贝

    如果类中有属性指向堆区，做赋值操作也会出现深浅拷贝问题

*/

#include"cpp.h"

class Person
{
private:

public:
    Person(int age);
    int *m_age;
    ~Person();
    Person& operator=(Person &p)
    {
        /*编译器是提供浅拷贝
        ,mage = p.myage
        
        应该先判断是否有属性在堆区，如果有先释放干净再深拷贝*/

        if (m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }


        m_age = new int(*p.m_age);
        
        return *this;
    }
};




void test()
{
    Person p1(18);
    cout << *p1.m_age << endl;

    Person p2(20);
    cout << *p2.m_age << endl;

    p2 = p1;
    cout << *p2.m_age << endl;
    
}

/*
    没有重载情况下，输出不会有任何问题，但是再析构函数中释放的时候重复释放了同一块内存
    所以操作了非法地址

    其实很简单，可以用深拷贝来解决这个问题
*/









Person::Person(int age)
{
    m_age = new int(age);
}

Person::~Person()
{
    if(m_age != NULL)
    {
        delete m_age;
        m_age = NULL;
    }
}
