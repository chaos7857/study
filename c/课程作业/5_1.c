// 1�������ַ����飬ʵ��ǧԪ��ƱСдת��д��
// ��Ҫ���磺����3153.68���������ǪҼ����½�Ʒ֣�
// ��Ҫ���磺����103.60��  �������Ҽ����ʰ��Ԫ½����֣�
// ��Ҫ���磺����3.6��        �������Ǫ�����ʰ��Ԫ½����֣�
// ��Ҫ���ϴ��������ֲ�ͬ�����н����


#include<stdio.h>

extern void printc(int n);

int main()
{
    int m, n, i= 5;
    while(i){
    scanf("%d.%d", &m, &n);

    if(n<10)
        n *= 10; 

    printc(m/1000);
    printf("Ǫ");
    printc(m/100%10);
    printf("��");
    printc(m/10%10);
    printf("ʰ");
    printc(m%10);
    printf("Ԫ");
    printc(n/10);
    printf("��");
    printc(n%10);
    printf("��\n");
    i--;}
    return 0;
}



void printc(int n)
{
    char arr[] = "��Ҽ��������½��ƾ�";
    printf("%c%c", arr[2*n], arr[2*n+1]);
}