#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{   
    // 他原本的模样
    // time_t timer = time(NULL);
    // srand((size_t)timer);

    srand((size_t)time(NULL));

    for (int i = 0 ;i < 10; i++)
    {   
        printf("%d\n", rand()%500+1500);
    }
    
    return 0;
}
