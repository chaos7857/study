#include<stdio.h>
#include<math.h>


int check_max()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        return 1;
    }
    else if (n<1)
    {
        return -1;
    }
    else if (n >1)
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int flag = check_max();
    printf("%d\n", flag);
    return 0;
}


