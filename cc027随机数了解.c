#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{



    /*产生随机数
    1、导入头文件time.h（随机数都是和1970年1月1日0点0分这个时间的差值产生的）和stdlib.h
    2、添加随机数种子（不然每次一样）
    3、获取随机数*/

    // 添加随机数种子（不然每次一样）
    srand((unsigned int)time(NULL));

    // 获取随机数
    // int value = rand();//只要rand（）就行了

    for (int i = 0; i < 10; i++)
    {
        int value = rand()% 10;//0~9随机数
        printf("%d\n", value);
    }
    

    return 0;
}