#include<stdio.h>
#define m 20
int n = 2;
int n_det(int det[n][n]);
int result = 0;

int main(int argc, char const *argv[])
{
    // ȷ������ʽ�Ľ���
    n = 3;
    // int det[n][n];
    int det[3][3] = 
    {
        {2, -1, 3},
        {-1, 2, 1},
        {4, 1, 2}
    };
    // ��ȡ����ʽ
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         scanf("%d", &det[i][j]);
    //     }
    // }

    // �ݹ����
    result = n_det(det);

    // �������ʽ������
    for (int i = 0; i < n; i++)
    {
        printf("| ");
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", det[i][j]);
        }
        printf("\b\b\b\b\b\b| ");
        printf("\n");
    }
    printf("= %d\n", result);

    
    return 0;
}


int n_det(int det[n][n])
{
    // int result = 0;
    int left_result = 0;
    
    if (n == 2)
    {
         result = det[0][0]*det[1][1] - det[0][1]*det[1][0];
    }
    else
        for (int i = 0; i < n; i++)
        {   
            int j = i + 1;
            // ȡ��������arr
            int arr[n-1][n-1];

            for (int k = 0; k < n-1; k++)
            {
                for (int l = 0; l < n-1; l++)
                {
                    arr[k][l] = det[k+1][j%n];
                    j++;
                }
            }

            left_result = n_det(arr);
            
            
            result += arr[0][i] * left_result;
        }
    return result;
}