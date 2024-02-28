/*

    只有        非静态成员变量      才属于类的对象上 
        其他的比如静态的不属于对象上


    空类的sizeof是1
        cpp编译器会给每个空对象也分配一个字节空间
            是为了区分空对象占内存的位置

    
*/
#include<iostream>
using namespace std;
class Person
{
public:
    Person();

    // 非静态成员变量占对象空间
    int m_a;

    // 静态成员变量不占对象空间
    static int m_b;

    // 函数也不占对象空间，所有函数共享一个函数实例
    void func();


    ~Person();
};

Person::Person()
{
    m_a = 0;
}

void Person :: func()
{
    cout << "ma:" << this->m_a << endl;
}

Person::~Person()
{
}
