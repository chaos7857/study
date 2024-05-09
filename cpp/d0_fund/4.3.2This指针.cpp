/*

    每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象公用一块代码


    那么问题来了：这块代码如何区分哪个对象调用了自己


    提供了特殊的对象指针，This ，this 指针指向被调用的成员函数所属的对象


    this 指针是隐含每一个非静态成员函数内的一种指针

    不需要定义，直接可以使用



    用途：
        形参和成员变量同名      可以用this区分

        类的非静态成员函数中返回对象本身，可以使用 return *this;

*/


class Person
{
public:
    Person(int age);
    Person& addage(const Person & p);
    int age=0;
    ~Person();
};

Person::Person(int age)
{
    // 错误展示
    age = age;
}

Person::~Person()
{
}




void goodgay()
{
    Person p1(18);
    p1.age;//是哪个？只是就近了，对原来的成员属性age没有影响
}
// 解决方法:
Person::Person(int age)
{
    // this 指针指向被调用的成员函数所属的对象
    this ->age = age;
}

// 这里如果不是以引用方式返回，那回来的就不是它 的本体而是 克隆体（创建的新对象）
Person& Person :: addage(const Person & p)
{
    this->age += p.age;
    return *this;
}

void test2()
{
    Person p1(10);
    Person p2(20);

    p2.addage(p1);

    // 链式编程思想
    p2.addage(p1).addage(p1).addage(p1).addage(p1).addage(p1).addage(p1);
}