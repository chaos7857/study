#include"myhead.h"

template<typename T>// ����һ��ģ�壬���߱��������������T��Ҫ������һ��ͨ������

void mySwap(T &a, T &b)
{
    T tem = a;
    a = b;
    b = tem;
}


void test()
{
    int a = 10;
    int b = 20;


    // ���ú���ģ�彻�������ַ�ʽ
    // 1 �Զ������Ƶ�
    mySwap(a, b);


    // 2 ��ʾָ������
    mySwap<int>(a, b);





    cout << "a = " << endl;
    cout << "b = " << endl;
}