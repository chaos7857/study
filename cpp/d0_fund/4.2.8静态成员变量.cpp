/*
��̬��Ա����
    ���ж�����ͬһ������(��̬��Ա����������ĳ�������ϣ����ж�����ͬһ������)
    
    �ڱ���׶η����ڴ�

    ���������������ʼ���������г�ʼֵ��



    ���ԣ���̬��Ա��������ͨ���������
        Ҳ����ͨ����������



    ��̬��Ա����Ҳ���з���Ȩ�޵�
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
    ~Person();

};
int Person :: m_a = 100;







int main()
{
    goodgay ();
    return 0;
}




void fangwen()
{
    cout << Person::m_a << endl;
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
