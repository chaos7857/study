/*
    子类中的private只是被隐藏了，还会继承下去
*/
#include"cpp.h"


class Father
{
public:
    int pub;
protected:
    int pro;
private:
    int pri;
};

class Son:public Father
{
public:
    int s_pub;
};



// cl /d1 reportSingleClassLayoutSon "4.6.3继承中的对象模型.cpp"