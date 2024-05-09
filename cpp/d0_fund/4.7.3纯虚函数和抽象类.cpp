/* 
前面的案例中，动物说不说话和计算器的ａｂｓｔｒａｃｔ的ｒｅｔｕｒｎ　０都没有用处
所以这个时候可以将他们改成纯虚函数


写法；
    virtual 返回值类型 函数名 （参数列表） = 0；


一个类中有了一个纯虚函数就叫抽象类，抽象类
            无法实例化对象
            子类必须重写抽象类中的纯虚函数，否则也属于抽象类


    
*/

class Base
{
public :
    virtual void func() = 0;
};

class Son:public Base
{
public:

};


void test()
{
    // Base b;
    // new Base;
    // 都无法运行


    // Son::func();

    
}

int main()
{
    test();
    return 0;
}