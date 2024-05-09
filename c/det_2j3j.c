#include<stdio.h>
#include<math.h>



int two_det(int det[2][2]);
int three_det(int det[3][3]);
int n_det(int det[n][n]);
int n;

int main()
{
    scanf("%d", &n);
    int det[n][n];

    if (n == 1)
    {
        printf("=%d\n", det[0][0]);
    }
    else if (n<1)
    {
        printf("±ğ¿ªÍæĞ¦ÁË\n");
    }
    else if (n >1)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                scanf("%d", &det[i][j]);
            }
            
        }


    }
    
    int result = two_det(det);



    for (int i = 0; i < 2; i++)
    {
        printf("| ");
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", det[i][j]);
        }
        printf("\b\b\b\b\b\b| ");
        printf("\n");
    }
    printf("= %d\n", result);


    return 0;
}


int two_det(int det[2][2])
{
    return det[0][0]*det[1][1] - det[0][1]*det[1][0];
}

int three_det(int det[3][3])
{   
    int sum = 0;
    for (int  i = 0; i < 3; i++)
    {   
        
        int arr[2][2] = 
        {
            {det[1][(i+1)%3], det[1][(i+2)%3]},
            {det[2][(i+1)%3], det[2][(i+2)%3]}
        };

        int left = two_det(arr);
        
        sum += det[0][i] * left;
    }
    
    return sum;
}
