// 用二分法求方程f(x)= x3-7x-1=0，在[0,6]区间的根
#include<stdio.h>
#include<math.h>
#define f(n) n*n*n-7*n-1
int main()
{
    int x1 = 0, x2 = 6;
    while (fabs(x1-x2)>1e-6)
    {
        
    }
    
    printf("%d\n", f(1));
    
    return 0;
}