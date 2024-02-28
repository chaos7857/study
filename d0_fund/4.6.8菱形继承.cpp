/*

概念：
    两个派生类继承同一个基类
    又有某个类同时继承两个派生类
    这种继承叫菱形继承


    例如：


            ->  动物        ->
            羊               驼
            -> 草泥马(羊驼) ->

    草泥马继承了羊和驼
    也就是继承了2份动物
    当同名时用作用域防止二义性
    但是羊和驼的东西都是动物继承来的



    Seeptuo st;
    st.Seep::m_age = 18;
    st.Tuo::m_age = 28;

    cout << st.sheep::m_age << endl     //18
    cout << st.Tuo::m_age << endl       //28



    但是这个数据只要有一份就好了啊
    导致了资源浪费


    解决方法：
    class Sheep: virtual public Animal{};
    class Tuo: virtual public Animall{};
    Seeptuo st;
    st.Seep::m_age = 18;
    st.Tuo::m_age = 28;

    cout << st.sheep::m_age << endl     //28
    cout << st.Tuo::m_age << endl       //28
    cout << st.m_age << endl       //28

*/
#include"cpp.h"
class Animal{public: int age;};
class Sheep: virtual public Animal{};
class Tuo: virtual public Animal{};
class Sheeptuo : Sheep,Tuo{};
/*
    vbptr   虚基类指针->vbtable

    v- virtual
    b -base
    ptr - pointer


    继承的不是值
    而是指针，通过记录偏移量来解决



    class Sheeptuo  size(12):
        +---
 0      | +--- (base class Sheep)
 0      | | {vbptr}
        | +---
 4      | +--- (base class Tuo)
 4      | | {vbptr}
        | +---
        +---
        +--- (virtual base Animal)
 8      | age
        +---

Sheeptuo::$vbtable@Sheep@:
 0      | 0
 1      | 8 (Sheeptuod(Sheep+0)Animal)

Sheeptuo::$vbtable@Tuo@:
 0      | 0
 1      | 4 (Sheeptuod(Tuo+0)Animal)
vbi:       class  offset o.vbptr  o.vbte fVtorDisp
          Animal       8       0       4 0

*/