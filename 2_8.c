// 4��������������һ���ַ����ж����Ǵ�Сд��ĸ�������ַ����������ַ���
//   (���������ĴΣ����������ֲ�ͬ�Ľ��)
#include<stdio.h>

int main()
{

    while (1)
    {
        char key;
        char key1;
        key = getchar();    
        key1 = getchar();
        // printf("%d\n\n", key);
        if (key>'a'-1&&key<'z'+1)
        {
            printf("small\n\n");
        }
        else
        {
            if (key>'A'-1&&key<'Z'+1)
            {
                printf("big\n\n");
            }
            else
            {
                if (key>'0'-1&&key<'9'+1)
                {
                    printf("numbers\n\n");
                }
                else
                {
                    printf("other\n\n");
                }
                
            }
            
        }
        


    }
    
    
    return 0;
}