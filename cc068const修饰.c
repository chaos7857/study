#include<stdio.h>
int main01(int argc, char const *argv[])
{   
    // ��������
    const int a = 10;
    // a = 100;
    // ���ɲ���

    // ���ǿ�������
    // ָ�����޸ĳ���
    int* p = &a;
    *p = 100;

    printf("%d\n", a);

    return 0;
}

int main02(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    
    const int* p = &a;
    
    p = &b;
    
    printf("%d\n", *p);

    return 0;
}


/*
    const ����ָ������
        �����޸�ָ�������ֵ
        �����Ը�ָ���ڴ�ռ��ֵ

    const ����ָ�����
        �����޸�ָ��ָ���ڴ�ռ��ֵ
        �������޸�ָ�������ֵ
*/ 

int main03(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    int* const p = &a;
    *p = 200;
    // p = &b;//error

    printf("%d\n", a);
    return 0;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;

    const int* const  p = &a;
    // p = &b;//error
    // *p = 100;//error
    // ����ô�޸���
    // ����ָ�룡��
    int** pp = &p;
    *pp = &b;
    printf("%d\n", *p);


    **pp = 100;
    printf("%d\n", *p);

    return 0;
}
