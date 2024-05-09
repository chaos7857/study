/*
    一般3种：
        使用一个已经创建完毕的对象来初始化另一个新对象

        值传递给函数参数传值

        以值方式返回局部对象
*/
#include"Person.h"
class Person
{
private:   
    int age;
    
public:
    Person();
    Person(int age);
    Person(const Person &p);
    ~Person();
};

// 使用一个已经创建完毕的对象来初始化另一个新对象
void test1()
{
    Person p1(20);
    Person p2(p1);
}

// 值传递给函数参数传值
void dowork(Person p)
{
    // 这里的P是一个拷贝的东西，不影响返回后的
    p = 10000000;
}
void test2()
{
    Person p;
    dowork(p);
}

// 以值方式返回局部对象
Person dodo()
{
    Person p1;
    // 这个返回的p1又是拷贝出来的，不是函数内创造的p1哦
    return p1;
}
void test3()
{
    Person p = dodo();
}






int main()
{

    return 0;
}






Person::Person()
{
    cout << "Person 默认构造函数调用"<< endl;
}

Person::~Person()
{
    cout << "Person 默认析构函数调用"<< endl;
}

Person :: Person(int mage)
{
    age = mage;
}

Person ::  Person(const Person &p)
{
    cout << "person 的拷贝构造函数"<< endl;
    age = p.age;
}
