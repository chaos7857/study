#include<stdio.h>

int main()
{
    // һ�㲻�ã���ʾ�޷���
    unsigned int a = -10;
    // %u ��ʾ���һ���޷���ʮ�����������ݣ� ���Ϊ4294967286
    // ���ĳ�%d��û��Ӱ�������ɳ�-10
    printf("%u\n", a);

    int b = 10;
    // 
    printf("%d\n", b);
    // ʮ������
    printf("%x\n", b);
    // �˽���
    printf("%o\n", b);



    // ����˽���������0��ͷ
    int c = 0123;
    // ʮ��������0x��ͷ
    int d = 0xabc;
    // ���ǲ���ֱ�Ӷ���ɶ�����


    printf("c:%d\t%x\t%o\t\nd:%d\t%x\t%o\t\n", c, d);



    // ��������

    int e;

    // ����scanf�����룬&��ʾ�ӵ�ַȡ��,ȡ��ַ�����


    // �п��ܻ�����ȫ��������Ϊ���ʹ���
    // ���������
    /*
        #define _CRT_SECURE_NO_WARNINGS
        pragma warning(disable:4996)
    
    */

    scanf("%d", &e);
    printf("%d\n", e);



    return 0;
}