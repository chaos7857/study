#include"myhead.h"

template<typename T>// 声明一个模板，告诉编译器后面代码中T不要报错，是一个通用数据

void mySwap(T &a, T &b)
{
    T tem = a;
    a = b;
    b = tem;
}


void test()
{
    int a = 10;
    int b = 20;


    // 利用函数模板交换有两种方式
    // 1 自动类型推导
    mySwap(a, b);


    // 2 显示指定类型
    mySwap<int>(a, b);





    cout << "a = " << endl;
    cout << "b = " << endl;
}