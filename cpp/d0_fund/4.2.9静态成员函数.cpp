/*

���ж�����һ������


��̬����ֻ�ܷ��ʾ�̬��Ա����



    ��̬��Ա����Ҳ�з���Ȩ��
*/




#include<iostream>
using namespace std;

void goodgay();
void fangwen();


class Person
{
public:
    Person();
    static int m_a;
    int m_b;
    static void fun()
    {
        // ���ɺܼ򵥣����ͨ���������þͲ�֪���ĵ����ĸ������������
        // m_b += 1;
        m_a += 1;
        cout<< "fun" << endl;
    }
    ~Person();

};
int Person :: m_a = 0;







int main()
{
    goodgay ();
    fangwen();
    return 0;
}




void fangwen()
{
    // һ����ͨ���������ʺͶ����������
    Person::fun();
}





void goodgay()
{
    Person p;
    p.m_a = 100;
    cout << p.m_a << endl;
    Person p2;
    p2.m_a = 200;
    cout << p.m_a << endl << p2.m_a << endl;

}
































Person::Person()
{
}

Person::~Person()
{
}
