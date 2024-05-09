#include"Person.h"

// 有参构造函数
Person :: Person(int)
{
    cout<< "有参调用"<< endl;
}


void Person :: setheight(double hei)
{
    height = hei;
}


void Person :: showheight()
{
    cout << "your height is" << height << endl << endl;
}



Person::Person()
{
    cout << "please input height:";
    height = 0;
}


Person :: ~Person()
{
    cout << "goodbye!" << endl;
}


// 拷贝构造函数
Person :: Person(const Person &p)
{
    height = p.height;
}
























// 举个简单的例子以及拷贝函数的建立
int test1()
{
    Person zhangsan;
    double height;
    cin >> height;
    zhangsan.setheight(height);
    zhangsan.showheight();
    return 0;
}


// 调用
void test2()
{
    // 1、括号法
    Person p;//默认构造函数的调用
    Person p2(10);//调用有参构造函数
    Person p3(p2);//拷贝构造函数调用

    /*
        调用默认构造函数的时候不能加（）！！！
        因为加上括号会被默认为函数的声明
    */

    // 2、显示法
    Person p1;
    Person p2 = Person(10);//有参构造
    Person p3 = Person(p2);//拷贝构造

    Person(10);//等号右边单独拿出来叫做匿名对象，当执行结束后会立即回收匿名对象

    /*
        不要用拷贝构造函数初始化匿名对象
        编译器会认为Person(p3)是Person p3;
        也就是把它当作对象声明了
    */

    // 3、隐式转换法
    Person p4 = 10;//相当于Person p4 = Person(10);
    Person p5 = p4;//拷贝构造
}


