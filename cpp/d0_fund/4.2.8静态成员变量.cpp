/*
静态成员变量
    所有对象共享同一份数据(静态成员变量不属于某个对象上，所有对象共享同一份数据)
    
    在编译阶段分配内存

    类内声明，类外初始化（必须有初始值）



    所以，静态成员变量可以通过对象访问
        也可以通过类名访问



    静态成员变量也是有访问权限的
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
    ~Person();

};
int Person :: m_a = 100;







int main()
{
    goodgay ();
    return 0;
}




void fangwen()
{
    cout << Person::m_a << endl;
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
