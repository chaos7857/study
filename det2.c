#include<stdio.h>
#include<math.h>

int two_det(int det[2][2]);
int three_det(int det[3][3]);


int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int det[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &det[i][j]);
        }
    
    }

    int result = 0;
    for (int  i = 0; i < n; i++)
    {   
        
        int arr[2][2] = 
        {
            {det[1][(i+1)%3], det[1][(i+2)%3]},
            {det[2][(i+1)%3], det[2][(i+2)%3]}
        };
        
        int left = two_det(arr);
        result += det[0][i] * left;
    }
    
    
    printf("= %d\n", result);
    return 0;
}



int two_det(int det[2][2])
{
    return det[0][0]*det[1][1] - det[0][1]*det[1][0];
}

