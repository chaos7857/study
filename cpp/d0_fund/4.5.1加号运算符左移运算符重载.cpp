#include "cpp.h"

class Person
{
private:
    
public:
    Person();
    Person(int a, int b);
    Person PersonaddPerson(Person &p);
    Person operator+(Person &p);
    int m_a;
    int m_b;
    ~Person();
};

Person :: Person(int a, int b):m_a(a), m_b(b)
{}

Person p1(10,10);
Person p2(10,10);

// 通过自己写函数返回相加的对象

Person Person:: PersonaddPerson(Person &p)
{
    Person tem;
    tem.m_a = this->m_a + p.m_a;
    tem.m_b = this-> m_b+ p.m_b;
    return tem;
}


// 编译器说太乱了
//      我来提供

Person Person::operator+(Person &p)
{
    Person tem;
    tem.m_a = this->m_a + p.m_a;
    tem.m_b = this-> m_b+ p.m_b;
    return tem;
}

// 从而将
Person p3 = p1.PersonaddPerson(p2);
// 或
Person p3 = p1.operator+(p2);
// 简化成了
Person p3= p1 + p2;



/*------------------------------------------------------------------------------------*/
// 那同理，左移运算符也可以


// 但是通常不会使用成员函数重载左移运算符，防止参数位置错误
// 也无法实现cout在左边

/*
// 所以粗略写是这样
void operator<<(ostream &cout, Person &p)
{
    cout << p.m_a << p.m_b;
}
*/


// 然后发现调用时候不符合链式的思想了
// 这样就可以无限追加了,记得把它写为友元函数的形式才能输出私有
ostream& operator<<(ostream &cout, Person &p)
{
    cout << p.m_a << p.m_b;
    return cout;
}


void test()
{
cout << p1 << endl;
}