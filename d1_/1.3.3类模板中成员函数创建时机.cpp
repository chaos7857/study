// ��ģ���к�����Ա�ڵ���ʱ�Ŵ���

// ��ͨ������һ��ʼ�ʹ�����





#include"myhead.h"


class Person1
{
public:
    void show();
};
class Person2
{
public:
    void show();
};

template<class T>
class Myclass
{
public:
    T obj;
    void func1()
    {
        obj.show();// �������ڻ���֪�����õ���ɶ, ֻ������������ָ�����õ����ĸ�show
    }
};

