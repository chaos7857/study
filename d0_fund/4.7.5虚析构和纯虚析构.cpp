/*
多态使用的时候，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用子类的析构代码


解决方案： 将父类的析构函数改成虚析构或者纯虚析构


共性；
    可以解决父类指针释放子类对象
    都需要具体的函数实现
区别：
    如果是纯虚析构，该类属于抽象类，无法实例化对象


*/

#include"cpp.h"

class Animal
{
public:
    Animal()
    {
        cout << "anima" << endl;
    }
    virtual ~Animal()
    {
        cout << "~animal" << endl;
    }
    virtual void speak() = 0;

};


class Cat : public Animal
{
public:
    Cat(string name)
    {
        m_name = new string(name);
    }
    virtual void speak(){
        cout << m_name << "isspeaking" << endl;
    }
    string *m_name;
    ~Cat()
    {
        if (m_name != NULL)
        {
            delete m_name;
            m_name = NULL;
        }
        
    }
};


void test()
{
    Animal *animal = new Cat("tom");
    animal -> speak();
    // 父类指针在析构时候不会调用子类中析构函数导致不会释放
    // ~Cat 不会被执行
    // 解决方案：~animal前加virtual形成虚析构
    delete animal;
}


/*
    纯虚析构：

    要另外写需要声明也需要实现

    有了纯虚析构后也是抽象类，无法实例化对象；


*/





/*加虚构或者纯虚析构都是为了解决子类中的析构函数无法实现的问题

子类中没有堆区数据可以不写*/