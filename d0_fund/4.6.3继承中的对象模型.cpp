/*
    �����е�privateֻ�Ǳ������ˣ�����̳���ȥ
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



// cl /d1 reportSingleClassLayoutSon "4.6.3�̳��еĶ���ģ��.cpp"