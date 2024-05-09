#include<stdio.h>

int main()
{
    // int a = 10;
    // int b = ++a*10;
    // printf("%d\n%d\n", a, b);
    

    
    // int d = 10;
    // int e = a++*10;
    // printf("%d\n%d\n", d, e);


    int a = 10;
    // 这个难说，二义性了，Linux是31，win是30
    int b = ++a + --a + a++;
    printf("%d\n%d\n", a, b);
    



    return 0;

}