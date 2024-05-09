/*

1 如果都可以实现，优先调用普通函数

2 可以通过空模板参数列表来强制调用函数模板

3 函数模板可以重载

4 如果函数模板可以产生更好的匹配，优先调用函数模板


所以如果出现了函数模板一般就不要写普通函数了
避免出现二义性
*/
#include"myhead.h"
void add(int a, int b)
{
    cout << "我是普通函数"<< endl;// 如果这行注释掉，则调用模板函数，因为没有实现体
}

template<class T>
void  add(T a, T b)
{
    cout << "我是模板函数"<< endl;
}

void test()
{
    int a;
    int b;

    add(a,b);

    // 强制调用模板
    add<>(a,b);

    // 4 如果函数模板可以产生更好的匹配，优先调用函数模板
    char c;
    char d;
    add(c, d);
}

int main()
{
    test();
    return 0;
}