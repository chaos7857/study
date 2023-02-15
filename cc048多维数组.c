#include<stdio.h>
int main(int argc, char const *argv[])
{   
    // 数据类型 数组名[块][层][行][列]
    // 一般 最多四维 比较常见
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
    

    printf("三维数组的大小：%d\n", sizeof(a));
    printf("二维数组一层的大小：%d\n", sizeof(a[0]));
    printf("二维数组一层的大小：%d\n", sizeof(a[0][0]));
    printf("二维数组的元素大小：%d\n", sizeof(a[0][0][0]));

    printf("二维数组的层数：%d\n", sizeof(a)/sizeof(a[0]));
    printf("二维数组的行数：%d\n", sizeof(a[0])/sizeof(a[0][0]));
    printf("二维数组的列数：%d\n", sizeof(a[0][0])/sizeof(a[0][0][0]));


    return 0;
}
