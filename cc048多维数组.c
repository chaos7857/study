#include<stdio.h>
int main(int argc, char const *argv[])
{   
    // �������� ������[��][��][��][��]
    // һ�� �����ά �Ƚϳ���
    int a[2][3][4] = 
    {
        {
           {1, 2, 3, 4},
           {2, 3, 4, 5},
           {3, 4, 5, 6}
        },
        {
            {4, 5, 6, 7},
            {5, 6, 7, 8},
            {6, 7, 8, 9}
        }
    };


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%d\t", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    

    printf("��ά����Ĵ�С��%d\n", sizeof(a));
    printf("��ά����һ��Ĵ�С��%d\n", sizeof(a[0]));
    printf("��ά����һ��Ĵ�С��%d\n", sizeof(a[0][0]));
    printf("��ά�����Ԫ�ش�С��%d\n", sizeof(a[0][0][0]));

    printf("��ά����Ĳ�����%d\n", sizeof(a)/sizeof(a[0]));
    printf("��ά�����������%d\n", sizeof(a[0])/sizeof(a[0][0]));
    printf("��ά�����������%d\n", sizeof(a[0][0])/sizeof(a[0][0][0]));


    return 0;
}
