/*

���
    ����������̳�ͬһ������
    ����ĳ����ͬʱ�̳�����������
    ���ּ̳н����μ̳�


    ���磺


            ->  ����        ->
            ��               ��
            -> ������(����) ->

    ������̳��������
    Ҳ���Ǽ̳���2�ݶ���
    ��ͬ��ʱ���������ֹ������
    ��������յĶ������Ƕ���̳�����



    Seeptuo st;
    st.Seep::m_age = 18;
    st.Tuo::m_age = 28;

    cout << st.sheep::m_age << endl     //18
    cout << st.Tuo::m_age << endl       //28



    �����������ֻҪ��һ�ݾͺ��˰�
    ��������Դ�˷�


    ���������
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
    vbptr   �����ָ��->vbtable

    v- virtual
    b -base
    ptr - pointer


    �̳еĲ���ֵ
    ����ָ�룬ͨ����¼ƫ���������



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