#include<stdio.h>


int main(void)
{   
    
    //const指是常量，规定后不发生改�??
    const int price = 3;
    
    // 变量在运行中值可以改�??
    int weight;
    printf("���������˶���kg��\n");
    scanf("%d",&weight);

    int sum = price* weight;

    printf("��һ����Ҫ%dԪ\n��ѡ��֧��������΢��",sum);

    return 0;



}