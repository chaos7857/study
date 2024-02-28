/*
常含数：
    成员函数后加const后我们称这个函数为常函数

    常函数内不可以修改成员属性

    成员属性声明时加关键字     mutable    后    在常函数中依然可以修改
常对象：
    声明对象前加const称该对象为常对象

    常对象只能调用常函数
*/

class Person
{
public:
//   也就是说   对于成员函数const 加在后面
    void showPerson() const
    {
        
        // m_a = 100;// 发现没法修改了

        /*
            因为实质上是 
                this -> m_a = 100;
            而this指针的本质是指针常量，指向不可修改
                可以理解为 Person * const this;

                再加了个const 后就是
                    const Person * const this;
                    所以没法 修改
        */



       m_b = 100;//发现可以哦
       
    }
    
    void fun();
    
    int m_a=0;
    mutable int m_b=0;
};



void test2()
{
    // 对象前加const变为常对象
    const Person p;
    // p.m_a = 100;//发现改不了
    p.m_b = 100;//加了mutable的哪都可以改


    
    // p.fun();// 发现调用不了，因为普通的函数是可以修改普通的值的，但是如果调用了普通的函数那么相当于可以改普通变量了
    // 所以常对象只能调用常函数
    p.showPerson();
    
}


int main()
{
    test2();
    return 0;
}