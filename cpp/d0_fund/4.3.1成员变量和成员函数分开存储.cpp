/*

    ֻ��        �Ǿ�̬��Ա����      ��������Ķ����� 
        �����ı��羲̬�Ĳ����ڶ�����


    �����sizeof��1
        cpp���������ÿ���ն���Ҳ����һ���ֽڿռ�
            ��Ϊ�����ֿն���ռ�ڴ��λ��

    
*/
#include<iostream>
using namespace std;
class Person
{
public:
    Person();

    // �Ǿ�̬��Ա����ռ����ռ�
    int m_a;

    // ��̬��Ա������ռ����ռ�
    static int m_b;

    // ����Ҳ��ռ����ռ䣬���к�������һ������ʵ��
    void func();


    ~Person();
};

Person::Person()
{
    m_a = 0;
}

void Person :: func()
{
    cout << "ma:" << this->m_a << endl;
}

Person::~Person()
{
}
