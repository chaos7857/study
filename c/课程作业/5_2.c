#include<stdio.h>

int main()
{   
/*
2、自定义二维整数数组，实现5行5列矩阵的转置，
     计算转置前（后）主、副对角线上元素之和。
（注意：两条对角线相交的元素只加一次）
     计算矩阵与转置矩阵的乘积。
（要求上传至少两次不同的运行结果）
*/

    int sum = 0, ji = 0;
    // int arr[5][5] = {
    //     {1, 2, 3, 4, 5},
    //     {6, 7, 8, 9, 10},
    //     {11, 12, 13, 14, 15},
    //     {16, 17, 18, 19, 20},
    //     {21, 22, 23, 24, 25},
    // };

    int arr[5][5] = {
        {1, 2, 3, 4, 5},
        {1, 0, 0, 0, 0},
        {1, 0, 0, 0, 0},
        {1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
    };
    int arrt[5][5] = {{0}};
    int arrb[5][5] = {{0}};
    // 实现转置
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arrt[i][j] = arr[j][i];
        }
        
    }
    
    // 输出转置
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", arrt[i][j]);
        }
        printf("\n");
        
    }

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i][i];
        sum += arr[i][4-i];
    }
    sum -= arr[2][2];
    printf("%d\n", sum);
    
    // 计算矩阵与转置矩阵的乘积。
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            ji = 0;
            for (int k = 0; k < 5; k++)
            {
                ji += arr[i][k]*arrt[k][j];
            }
            
            arrb[i][j] = ji;
        }
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", arrb[i][j]);
        }
        printf("\n");
        
    }


    return 0;
}