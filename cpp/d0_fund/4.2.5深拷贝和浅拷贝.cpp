// ***很重要


/*
    浅拷贝：简单的赋值拷贝操作

    深拷贝： 在堆区重新申请空间进行拷贝操作

    如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题
*/ 


#include<iostream>
using namespace std;
class Person
{ 
public:
    Person();
    Person(int age, int height);
    Person(const Person &p);
    ~Person();
    int m_age;
    int *m_height;
};

void test1()
{
    Person p1(18,180);
    cout << p1.m_age << p1.m_height << endl;

/* 如果用编译器提供的拷贝构造函数会做浅拷贝
 浅拷贝会在析构函数调用时产生堆区函数重复释放的问题
 可以用深拷贝来解决问题，得自己写拷贝构造函数
 在拷贝的时候重新创建堆区，就不会重复释放了
 */
    Person p2(p1);
    cout << p2.m_age << p2.m_height << endl;

}



int main()
{
    return 0;
}



















Person :: Person()
{
    cout << "默认函数构造调用" << endl;
}
Person :: Person(int age, int height)
{
    m_age = age;
    // 堆区开辟的由程序员手动开辟也要手动释放
    m_height = new int(height);
    cout << "有参函数构造调用" << endl;
}
Person :: ~Person()
{
    // 释放堆区开辟数据的操作
    if (m_height != NULL)
    {
        delete m_height;
        m_height = NULL;
    }
    
    cout << "析构函数构造调用" << endl;
}
Person :: Person(const Person & p)
{
    cout << "拷贝构造函数" << endl;
    m_age = p.m_age;
    // 编译器默认的浅拷贝代码是这样的：
    // m_height = p.m_height;

    // 深拷贝
    m_height = new int(*p.m_height);
}