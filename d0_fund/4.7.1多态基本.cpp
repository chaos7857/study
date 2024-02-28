/*
多态是cpp三大特性之一
多态分2类
    静态多态：函数重载，运算符重载
    动态多态：派生类和虚函数实现运行时多态//大多说的
    
    
静态多态和动态多态的区别：
    静态多态的函数地址在编译阶段就能把函数地址确定，而动态多态是运行阶段*/
#include"cpp.h"

class Animal
{
public:
    virtual void speak()
    {
        cout << "is speaking" << endl;
    }
};

class Cat:public Animal 
{
public:
    void speak()
    {
        cout << "cat is speaking" << endl;
    }
};

void dospeak(Animal &animal)// Animal & animal = cat
//cpp中父类的引用可以直接做子类的
{
    animal.speak();
}



void test()
{
    Cat cat;
    dospeak(cat);// 请问这里到底是动物说话还是猫说话？？？

    /*这里本意是让猫说话，但是说话的是动物
    因为地址早绑定，在编译阶段确定了函数地址
    想让猫说话就得让地址在运行时在绑定
    解决很简单：
        在animal的函数前加上virtual就行



    加上之后第33行代码没法直接判断，要根据传递的参数了判断



    动态多态满足条件：
        1 有继承关系
        2 子类重写父类的虚函数
            //重写指的是函数返回值，参数列表全部相同才叫重写

    动态多态的使用：
        父类的指针或者引用指向子类的对象，第30行注释
    */
}




int main()
{
    test();
    return 0;
}


/*原理剖析

    虚函数（表）指针vfptr 会被记录在
    vftable中， 表内记录虚函数入口地址
    继承时，会把父类的vfptr先进行记录，然后当子类中出现同名重写的时候，会将其覆盖

    当父类指针或者引用指向子类对象的时候，就会发生多态
    Animal & animal = cat;// 本身创建的是cat 对象
    animal.speak();

*/