/*
cpp���ٸ�һ�������4�� ����
    1 Ĭ�Ϲ��캯�����޲Σ�������գ�
    2 Ĭ�������������޲Σ�������գ�
    3 Ĭ�Ͽ������캯���������Խ��п���
    
    4 ��ֵ����� operator= �����Խ���ֵ����

    �������������ָ�����������ֵ����Ҳ�������ǳ��������

*/

#include"cpp.h"

class Person
{
private:

public:
    Person(int age);
    int *m_age;
    ~Person();
    Person& operator=(Person &p)
    {
        /*���������ṩǳ����
        ,mage = p.myage
        
        Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ������*/

        if (m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }


        m_age = new int(*p.m_age);
        
        return *this;
    }
};




void test()
{
    Person p1(18);
    cout << *p1.m_age << endl;

    Person p2(20);
    cout << *p2.m_age << endl;

    p2 = p1;
    cout << *p2.m_age << endl;
    
}

/*
    û����������£�����������κ����⣬�����������������ͷŵ�ʱ���ظ��ͷ���ͬһ���ڴ�
    ���Բ����˷Ƿ���ַ

    ��ʵ�ܼ򵥣����������������������
*/









Person::Person(int age)
{
    m_age = new int(age);
}

Person::~Person()
{
    if(m_age != NULL)
    {
        delete m_age;
        m_age = NULL;
    }
}
