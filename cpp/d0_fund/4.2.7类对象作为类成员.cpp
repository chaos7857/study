// �����Ա
#include<iostream>
// #include<string>
using namespace std;

class Phone
{
public:
    Phone(string pname)
    {
        m_pname = pname;
    }
    string m_pname;
};

class Person
{
public:

    Person(string name, string pname): m_name(name), m_phone(pname)
    {

    }

    string m_name;

    Phone m_phone;
};

void test1()
{
    Person p("����", "iphone");
    cout << p.m_name << "  ���ֻ���  " <<  p.m_phone.m_pname << endl;
}


int main()
{
    test1();
    return 0;
}