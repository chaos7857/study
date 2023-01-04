#include<stdio.h>


int main(void)
{   
    
    //const鎸囨槸甯搁噺锛岃瀹氬悗涓嶅彂鐢熸敼鍙??
    const int price = 3;
    
    // 鍙橀噺鍦ㄨ繍琛屼腑鍊煎彲浠ユ敼鍙??
    int weight;
    printf("请输入买了多少kg：\n");
    scanf("%d",&weight);

    int sum = price* weight;

    printf("您一共需要%d元\n请选择支付宝或者微信",sum);

    return 0;



}