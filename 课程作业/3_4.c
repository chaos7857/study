// 4������ͬ����λ��ģ�����ʱ����ĵ���ʱ�仯
// ���磺��03:00:00��ʼ��00:00:00Ϊֹ��
// �����й����У����������ϴ����н����


#include<stdio.h>
#include<windows.h>
#include<time.h>
int main()
{
    time_t t;
    for (int i = 2; i > 0; i--)
    {
        for (int j = 59; j >= 0; j--)
        {
            for (int k = 59; k >= 0; k--)
            {   
                system("cls");
                printf("����ʱ\t\tϵͳʱ��\n");
                printf("%02d:%02d:%02d\t", i, j, k);
                time(&t);
                printf("%s\n", ctime(&t));
                Sleep(960);//��λ�Ǻ���
            }
            
        }
        
    }

    return 0;
}