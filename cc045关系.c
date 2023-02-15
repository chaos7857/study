#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[2][3] = 
   {
    {1, 2, 3}, 
    {4, 5, 6} 
   };


    printf("%p\n", arr);
    printf("%p\n", arr[0]);
    printf("%p\n", &arr[0][0]);

    return 0;
}
