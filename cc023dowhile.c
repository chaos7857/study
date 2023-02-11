#include<stdio.h>
int main()
{   
    int i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < 10);
    

    // dowhile可以让条件为假作为开始
    // 这是唯一区别
    return 0;
}