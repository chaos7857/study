#include"cpp.h"
/*
�����������أ�
�����������������Ҳ��������

�������غ�ʹ�÷�ʽ�ǳ��������ã���˳�Ϊ�º���

�º���û�й̶�д�����ǳ����
��stl��ʹ�÷ǳ���
*/
class Myprint
{
private:
    
public:
    Myprint();
    ~Myprint();

    void operator()(string test)
    {
        cout << test << endl;
    }
};

class Myadd
{
private:
    
public:
    Myadd();
    ~Myadd();
    int operator()(int num1, int num2)
    {
        return num1 + num2;
    }
};

void test()
{
    Myprint myprint;
    myprint("hello");

    Myadd add;
    int a = add(100, 100);


    // ������������
    cout << Myadd()(100, 100) << endl;// ������()��һ��Ӧ����һ����ʱ�������󣬺�߲����ˣ���߾������ص������
}



















Myadd::Myadd()
{
}

Myadd::~Myadd()
{
}

























Myprint::Myprint()
{
}

Myprint::~Myprint()
{
}
