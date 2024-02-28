#include<stdio.h>
int main0()
{
    char arr[20];
    scanf("%[^\n]", &arr);
    printf("%s", arr);
    return 0;
}
#include<stdio.h>
int main()
{
    int arr[10] = {0};
    int i, n= 0;    
    char a;
    gets(a);
    for(i = 10;i>=0;i)
    {
        n = n*10 +a[i];
    }
    printf("digit = %d\n", n);
    /*
    printf("Enter a string: ");
    for(i = 0;i!='\n'&&i<10;i++)
    {
        scanf("%d", &arr[i]);
    }
    arr[i] = 0;
    printf("digit = %d\n", arr);
    */

    
    return 0;
}