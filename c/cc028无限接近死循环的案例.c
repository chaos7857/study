#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    /*�����֣�
    �������1��100���������
    �����˳���
    ��Ҫ�Ѻõ���ʾ*/
    srand((unsigned int)time(NULL));
    int value = rand()%100;
    
    int num;
    int a = 1;
    printf("��Ϸ����:��0~99�������һ����������Ϊֹ�������ٵĻ�ʤ��\n");
    
    for (;;)
    {   
        printf("���ĵ�%d�β²���:", a);
        scanf("%d", &num);

        if (value > num)
        {
            printf("���������̫С�ˣ�\n");
        }    
        else if (value < num)
        {
            printf("���������̫���ˣ�\n");
        }
        else
        {
            printf("�¶��ˣ�\n");
            printf("����������%d�β²�\n�÷�Ϊ%d\n", a, 10-a/10);
            break;
        }    
        a++;
    }
    


    return 0;
}

   