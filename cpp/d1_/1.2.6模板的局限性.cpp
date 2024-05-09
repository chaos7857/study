// 1 不能传递数组


// 2 不能是像Person这样的自定义数据类型


// 为了解决这种问题，提供了模板重载，可以为这些特定类型提供具体化模板


// 学习模板不是为了写模板，而是为了在STL能够运用系统提供的模板
#include"myhead.h"



class Person
{
private:
    
public:
    Person(string name, int age);
    ~Person();
    string m_name;
    int m_age;
};

Person::Person(string name, int age):m_name(name), m_age(age)
{
}

Person::~Person()
{
}

template < class T>
bool myCompare(T&a, T&b)
{
    // if (a == b)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    return a == b ? true : false;
}
// 利用具体化Perosn 版本实现代码，具体化优先调用
template<>bool myCompare(Person&a, Person&b)
{
    return a.m_age == b.m_age && a.m_name == b.m_name ? true : false;
}

void test()
{
    int a = 10;
    int b = 20;


    if (myCompare(a,b))
    {
            cout << "true" << endl;
    }
    else{
        cout << "false " << endl;
    }
    
}

void test2()
{
    Person a("tom", 10);
    Person b("Tom", 10);
    if (myCompare(a,b))
    {
        cout << "true" << endl;
    }
    else{
        cout << "false " << endl;
    }
}