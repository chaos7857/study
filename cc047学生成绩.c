#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5][3];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }   
    }
    

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];

        }
        printf("��%d��ѧ�����ܳɼ�Ϊ��%d\tƽ���ɼ���%d\n", i + 1, sum, sum/3);
    }
    
    

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += arr[j][i];
        }
        printf("��%d�Ź��ε��ܳɼ�Ϊ��%d\tƽ���ɼ���%d\n", i + 1, sum, sum/5);
    }
    
    return 0;
}
