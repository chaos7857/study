// 有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

#include<stdio.h>

int main()
{
    int n = 0;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            for (int k = 1; k < 5; k++)
            {
                if (i!=j && i!=k && j!= k)
                {
                    printf("%d%d%d\n", i, j, k);
                    n++;
                }
                
            }
            
        }
        
    }
    printf("一共有%d个\n", n);

    return 0;
}
