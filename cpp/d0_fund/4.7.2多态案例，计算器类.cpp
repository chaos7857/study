/*
��̬�ŵ㣺 
    ������֯�ṹ����
    �ɶ���ǿ
    ����ǰ�ں�����չά��

*/
#include"cpp.h"

/*
    ����������һ���ᳫ����ԭ�� ����չ���п��ţ��޸Ľ��йر�


*/




// ���ö�̬ʵ�ּ�����

// ʵ�ּ������ĳ�����
class AbstractCalculator
{
public:
    virtual int getResult()
    {
        return  0;
    }
    int m_num1;
    int m_num2;
};

// �ӷ���������
class AddCalculator:public AbstractCalculator
{
public:
    virtual int getResult()// virtual �ؼ��ֿɴ��ɲ���
    {
        return  m_num1 + m_num2;
    }
};


// ����
class SubCalculator:public AbstractCalculator
{
public:
    virtual int getResult()// virtual �ؼ��ֿɴ��ɲ���
    {
        return  m_num1 - m_num2;
    }
};

// �˷�
class MulCalculator:public AbstractCalculator
{
public:
    virtual int getResult()// virtual �ؼ��ֿɴ��ɲ���
    {
        return  m_num1 * m_num2;
    }
};


void test2()
{
    // ��̬��ʹ������
    // ����ָ�����������ָ���������

    // ��ָ�룬�ӷ�

    AbstractCalculator * abc = new AddCalculator;
    abc -> m_num1 = 10;
    abc -> m_num2 = 10;
    cout << abc->getResult() << endl;

    // ��������ָ��(���ٵ�������)
    delete abc;

    // ����ʹ�ã�ָ�������û�б䣬���Ǹ����ָ��
    abc = new SubCalculator;
    abc -> m_num1 = 10;
    abc -> m_num2 = 10;
    cout << abc->getResult() << endl;



    
}