#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    /*
    6ºì 1~32
    1À¶ 1~16
    */ 
    srand((unsigned int)time(NULL));
    int arr[6] = {0};
    int value = 0;
    int flag = 0;

    for (int i = 0; i < 6; i++)
    {
        value = rand()%32+1;
        // È¥ÖØ
        for (int k = 0; k < flag; k++)
        {
            if (value == arr[k])
            {
                i--;
                break;
            }  
        }


        if (i == flag)
        {
            arr[flag] = value;
            flag++;
        } 
    }
    

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf(" + %d", rand()%16+1);
    
    return 0;
}
