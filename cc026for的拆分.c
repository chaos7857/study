#include<stdio.h>
int main()
{   
    int i = 0;

    for (;;)
    {   
        if (i >= 10)
        {
            break;
        }
        
        printf("%d\n", i);

        i++;
    }
    

    // ��ѭ��ʾ����
    // while(1) 
    // for(;;)
    
    return 0;
}