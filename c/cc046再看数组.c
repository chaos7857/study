#include<stdio.h>
int main(int argc, char const *argv[])
{
    // ���淶��д�������Ƽ�
    int arr[2][3] = 
   {
    1, 2, 3, 4, 5, 6
   };
    
// ����
    int arr[][3] = 
   {
    1, 2, 3, 4, 5, 6
   };
    
    int arr[][3] = 
    {
        0
    };
    

    
    for (int i = 0; i < 2; i++)
   {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
   }
   
    return 0;
}
