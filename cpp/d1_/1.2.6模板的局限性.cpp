// 1 ���ܴ�������


// 2 ��������Person�������Զ�����������


// Ϊ�˽���������⣬�ṩ��ģ�����أ�����Ϊ��Щ�ض������ṩ���廯ģ��


// ѧϰģ�岻��Ϊ��дģ�壬����Ϊ����STL�ܹ�����ϵͳ�ṩ��ģ��
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
// ���þ��廯Perosn �汾ʵ�ִ��룬���廯���ȵ���
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