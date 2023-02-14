#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int change;
    for (int i = 0; i < 5; i++)
    {
        change = arr[i];
        arr[i] = arr[9-i];
        arr[9-i] = change;
    }
    for (int i = 0; i < 10; i++)
        {
            printf("%d\n", arr[i]);
        }
    
    return 0;
}
