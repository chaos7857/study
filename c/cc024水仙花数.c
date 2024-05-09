#include<stdio.h>
#include<math.h>

int main()
{   
    int i = 100;
    do
    {
        int a = i % 10;
        int b = i / 10 % 10;
        int c = i / 100;
        if (a*a*a + pow(b, 3) + pow(c, 3) == i)
        {
            printf("%d\n", i);
        }
        i++;
    } while (i <= 999);
    
    return 0;
}