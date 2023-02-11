#include<stdio.h>
int main()
{   
    int j = 5;
    // 这是c99库，要是c89需要在外面定义int i;
    for (int i = 0; i < 10, j < 20; i++,  j += 5)
    {
        printf("%d\n", i);
    }
    
    return 0;
}