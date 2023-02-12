#include<stdio.h>
#include<windows.h>
int main()
{
    for (int i = 0; i < 24; i++)
    {
        for (int j = 0; j < 60; j++)
        {
            for (int k = 0; k < 60; k++)
            {   
                system("cls");
                printf("%02d:%02d:%02d\n", i, j, k);
                Sleep(960);//µ¥Î»ÊÇºÁÃë
            }
            
        }
        
    }
    
    return 0;
}
