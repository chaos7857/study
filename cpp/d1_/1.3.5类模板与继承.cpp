/*������̳еĸ�����һ����ģ�壬������������ʱ��Ҫָ��������T������

�����ָ�����������޷�����������ڴ�

��������ָ��������T�����ͣ�����ҲҪ�����ģ��
*/

#include"myhead.h"
template<class T>
class Base
{
public:
    T m;
};

class Son:public Base<int>
{

};



template<class T1, class T2>
class SmallSon:public Base<T2>
{

    T1 obj;
};