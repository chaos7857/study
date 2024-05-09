/*
1 ָ�����������----- ֱ����ʾ�������������
2 ����ģ�廯
3 ������ģ�廯


ͨ����ģ�崴���Ķ��󣬿��������ַ�ʽ�����д���
ʹ�ñȽϹ㷺���ǵ�һ�֣�ָ����������ͣ�
*/

#include"myhead.h"

template<class T1, class T2>
class Person 
{
public:
    Person(T1 name, T2 age):mname(name), mage(age)
    {
    }
    void showPerson()
    {
        cout << this -> mname << ":" << this -> mage << endl;
    }
    T1 mname;
    T2 mage;
};

// 1 ָ�����������----- ֱ����ʾ�������������
void printPerson1(Person <string, int>&p)
{
    p.showPerson();
}
void test1()
{
    Person <string, int>p("tom", 100);
    printPerson1(p);
}

// 2 ����ģ�廯
template<class T1, class T2>
void printPerson2(Person <T1, T2>&p)
{
    p.showPerson();
    cout << "t1����Ϊ" << typeid(T1).name() << endl;
    cout << "t2����Ϊ" << typeid(T2).name() << endl;
}
void test2()
{
    Person <string, int>p("tom", 100);
    printPerson2(p);
}

// 3 ������ģ�廯
template<class T>
void printPerson3(T&p)
{
    p.showPerson();
}
void test3()
{
    Person <string, int>p("tom", 100);
    printPerson3(p);
}