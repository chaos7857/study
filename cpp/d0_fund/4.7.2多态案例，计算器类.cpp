/*
多态优点： 
    代码组织结构清晰
    可读性强
    利于前期后期扩展维护

*/
#include"cpp.h"

/*
    真正开发中一般提倡开闭原则： 对扩展进行开放，修改进行关闭


*/




// 利用多态实现计算器

// 实现计算器的抽象类
class AbstractCalculator
{
public:
    virtual int getResult()
    {
        return  0;
    }
    int m_num1;
    int m_num2;
};

// 加法计算器类
class AddCalculator:public AbstractCalculator
{
public:
    virtual int getResult()// virtual 关键字可带可不带
    {
        return  m_num1 + m_num2;
    }
};


// 减法
class SubCalculator:public AbstractCalculator
{
public:
    virtual int getResult()// virtual 关键字可带可不带
    {
        return  m_num1 - m_num2;
    }
};

// 乘法
class MulCalculator:public AbstractCalculator
{
public:
    virtual int getResult()// virtual 关键字可带可不带
    {
        return  m_num1 * m_num2;
    }
};


void test2()
{
    // 多态的使用条件
    // 父类指针或者引用来指向子类对象

    // 用指针，加法

    AbstractCalculator * abc = new AddCalculator;
    abc -> m_num1 = 10;
    abc -> m_num2 = 10;
    cout << abc->getResult() << endl;

    // 用完销毁指针(销毁的是数据)
    delete abc;

    // 重新使用，指针的类型没有变，还是父类的指针
    abc = new SubCalculator;
    abc -> m_num1 = 10;
    abc -> m_num2 = 10;
    cout << abc->getResult() << endl;



    
}