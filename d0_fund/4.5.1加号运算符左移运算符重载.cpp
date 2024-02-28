#include "cpp.h"

class Person
{
private:
    
public:
    Person();
    Person(int a, int b);
    Person PersonaddPerson(Person &p);
    Person operator+(Person &p);
    int m_a;
    int m_b;
    ~Person();
};

Person :: Person(int a, int b):m_a(a), m_b(b)
{}

Person p1(10,10);
Person p2(10,10);

// ͨ���Լ�д����������ӵĶ���

Person Person:: PersonaddPerson(Person &p)
{
    Person tem;
    tem.m_a = this->m_a + p.m_a;
    tem.m_b = this-> m_b+ p.m_b;
    return tem;
}


// ������˵̫����
//      �����ṩ

Person Person::operator+(Person &p)
{
    Person tem;
    tem.m_a = this->m_a + p.m_a;
    tem.m_b = this-> m_b+ p.m_b;
    return tem;
}

// �Ӷ���
Person p3 = p1.PersonaddPerson(p2);
// ��
Person p3 = p1.operator+(p2);
// �򻯳���
Person p3= p1 + p2;



/*------------------------------------------------------------------------------------*/
// ��ͬ�����������Ҳ����


// ����ͨ������ʹ�ó�Ա���������������������ֹ����λ�ô���
// Ҳ�޷�ʵ��cout�����

/*
// ���Դ���д������
void operator<<(ostream &cout, Person &p)
{
    cout << p.m_a << p.m_b;
}
*/


// Ȼ���ֵ���ʱ�򲻷�����ʽ��˼����
// �����Ϳ�������׷����,�ǵð���дΪ��Ԫ��������ʽ�������˽��
ostream& operator<<(ostream &cout, Person &p)
{
    cout << p.m_a << p.m_b;
    return cout;
}


void test()
{
cout << p1 << endl;
}