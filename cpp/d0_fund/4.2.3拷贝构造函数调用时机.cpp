/*
    һ��3�֣�
        ʹ��һ���Ѿ�������ϵĶ�������ʼ����һ���¶���

        ֵ���ݸ�����������ֵ

        ��ֵ��ʽ���ؾֲ�����
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

// ʹ��һ���Ѿ�������ϵĶ�������ʼ����һ���¶���
void test1()
{
    Person p1(20);
    Person p2(p1);
}

// ֵ���ݸ�����������ֵ
void dowork(Person p)
{
    // �����P��һ�������Ķ�������Ӱ�췵�غ��
    p = 10000000;
}
void test2()
{
    Person p;
    dowork(p);
}

// ��ֵ��ʽ���ؾֲ�����
Person dodo()
{
    Person p1;
    // ������ص�p1���ǿ��������ģ����Ǻ����ڴ����p1Ŷ
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
    cout << "Person Ĭ�Ϲ��캯������"<< endl;
}

Person::~Person()
{
    cout << "Person Ĭ��������������"<< endl;
}

Person :: Person(int mage)
{
    age = mage;
}

Person ::  Person(const Person &p)
{
    cout << "person �Ŀ������캯��"<< endl;
    age = p.age;
}
