#include"cpp.h"
/*
函数调用重载，
函数调用运算符（）也可以重载

由于重载后使用方式非常像函数调用，因此称为仿函数

仿函数没有固定写法，非常灵活
在stl里使用非常多
*/
class Myprint
{
private:
    
public:
    Myprint();
    ~Myprint();

    void operator()(string test)
    {
        cout << test << endl;
    }
};

class Myadd
{
private:
    
public:
    Myadd();
    ~Myadd();
    int operator()(int num1, int num2)
    {
        return num1 + num2;
    }
};

void test()
{
    Myprint myprint;
    myprint("hello");

    Myadd add;
    int a = add(100, 100);


    // 匿名函数对象
    cout << Myadd()(100, 100) << endl;// 类名加()第一反应就是一个临时匿名对象，后边不用了，后边就是重载的运算符
}



















Myadd::Myadd()
{
}

Myadd::~Myadd()
{
}

























Myprint::Myprint()
{
}

Myprint::~Myprint()
{
}
