/*
    cpp允许空指针调用成员函数，
    但是
        注意有没有用到this指针


    如果用到了，需要加以判断保证代码健壮性

*/

#include "Person.h"



class Person
{
public:

    void showclassname()
    {
        cout << "this is person class" << endl;
    }

    void showpersonage()
    {
        cout << "age=" << mage << endl;
    }
    int mage;
};


void test1()
{
    Person *p = NULL;


    // 单这行不会崩
    p->showclassname();
    
    
    
    // 单这行会崩
    // 原因在于函数体内调用属性时默认是         this -> mage
    // 而这里，p是一个空的指针，那this就是一个不存在的东西了
    p->showpersonage();

}



// 解决方案
void Person :: showpersonage()
{
    if (this == NULL)
    {
        return;
    }
    cout << "age=" << mage << endl;
}




int main()
{
    test1();
    return 0;
}



