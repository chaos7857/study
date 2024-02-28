#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

int random(int k,int b)
{
    srand((unsigned int)time(NULL));
    int a = rand()%(k-b+1)+k;
    return &a;
}


int main()
{

    for (int i = 0; i < 100; i++)
    {
        int* a = random(0, 2);
        printf("%d\n", a);
    }
    return 0;
}
