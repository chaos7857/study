#include "cpp.h"

class Myint
{
    friend ostream& operator<<(ostream &cout, Myint myint);

private:
    int my_num;
public:
    Myint();

    // ��д��ǰ++������     
    Myint& operator++()// Ϊʲô���ص����ö�����������Ϊ���������һ�εĻ����Ͳ��Ƕ�ԭ����������
    //���õ�Ŀ����һֱ��һ�����в������������Ϊ��ʾ��һ�޶�
    {
        my_num++;
        return *this;
    }



    // ��++
    Myint operator++(int)//�����int ��ռλ���������Ա�ʾ��������
    // ���ﲻ������������Ϊ����ֵ��tem��������������Ǻ�ߵĲ�������tem��
    {
        // ��¼���
        Myint tem = *this;
        // ����
        my_num++;
        // ����¼���������
        return tem;
    }

    // ������
    ~Myint();
};

ostream& operator<<(ostream &cout, Myint myint)
{
    cout << myint.my_num << endl;
    return cout;
}



void test1()
{
    Myint myint;
    cout << ++myint << endl;
    cout << myint++ << endl;

}















Myint::Myint()
{
    my_num = 0;
}

Myint::~Myint()
{
}
