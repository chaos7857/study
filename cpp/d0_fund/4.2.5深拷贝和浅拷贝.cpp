// ***����Ҫ


/*
    ǳ�������򵥵ĸ�ֵ��������

    ����� �ڶ�����������ռ���п�������

    ����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������
*/ 


#include<iostream>
using namespace std;
class Person
{ 
public:
    Person();
    Person(int age, int height);
    Person(const Person &p);
    ~Person();
    int m_age;
    int *m_height;
};

void test1()
{
    Person p1(18,180);
    cout << p1.m_age << p1.m_height << endl;

/* ����ñ������ṩ�Ŀ������캯������ǳ����
 ǳ��������������������ʱ�������������ظ��ͷŵ�����
 �����������������⣬���Լ�д�������캯��
 �ڿ�����ʱ�����´����������Ͳ����ظ��ͷ���
 */
    Person p2(p1);
    cout << p2.m_age << p2.m_height << endl;

}



int main()
{
    return 0;
}



















Person :: Person()
{
    cout << "Ĭ�Ϻ����������" << endl;
}
Person :: Person(int age, int height)
{
    m_age = age;
    // �������ٵ��ɳ���Ա�ֶ�����ҲҪ�ֶ��ͷ�
    m_height = new int(height);
    cout << "�вκ����������" << endl;
}
Person :: ~Person()
{
    // �ͷŶ����������ݵĲ���
    if (m_height != NULL)
    {
        delete m_height;
        m_height = NULL;
    }
    
    cout << "���������������" << endl;
}
Person :: Person(const Person & p)
{
    cout << "�������캯��" << endl;
    m_age = p.m_age;
    // ������Ĭ�ϵ�ǳ���������������ģ�
    // m_height = p.m_height;

    // ���
    m_height = new int(*p.m_height);
}