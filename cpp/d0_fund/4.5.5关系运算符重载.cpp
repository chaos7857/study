#include"cpp.h"


class Person
{
private:
    
public:
    Person(string name, int age);
    string m_name;
    int m_age;
    ~Person();

    bool operator==(Person &p)
    {
        if (this ->m_name == p.m_name && this->m_age == p.m_age)
        {
            return true;
        }
        return false;
        
    }
};



void test()
{
    Person p1("tom", 18);

    Person p2("tom", 18);

    if (p1 == p2)
    {
        cout << "==" << endl;
    }
    
}


















Person::Person(string name, int age)
{
    m_name = name;
    m_age = age;
}

Person::~Person()
{
}


