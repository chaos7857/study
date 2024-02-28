/*

所有对象共享一个函数


静态函数只能访问静态成员变量



    静态成员函数也有访问权限
*/




#include<iostream>
using namespace std;

void goodgay();
void fangwen();


class Person
{
public:
    Person();
    static int m_a;
    int m_b;
    static void fun()
    {
        // 理由很简单，如果通过类名调用就不知道改的是哪个对象的属性了
        // m_b += 1;
        m_a += 1;
        cout<< "fun" << endl;
    }
    ~Person();

};
int Person :: m_a = 0;







int main()
{
    goodgay ();
    fangwen();
    return 0;
}




void fangwen()
{
    // 一样有通过类名访问和对象访问两种
    Person::fun();
}





void goodgay()
{
    Person p;
    p.m_a = 100;
    cout << p.m_a << endl;
    Person p2;
    p2.m_a = 200;
    cout << p.m_a << endl << p2.m_a << endl;

}
































Person::Person()
{
}

Person::~Person()
{
}
