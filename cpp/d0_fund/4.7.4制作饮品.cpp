#include"cpp.h"

class AbstractDrinking
{
public:
    virtual void boil()=0;

    virtual void brew() = 0;
    
    virtual void pour_in_cup() = 0;

    virtual void put_something() = 0;
    
    void make_drink()
    {
        boil();
        brew();
        pour_in_cup();
        put_something();
    }
};


class Coffee: public AbstractDrinking
{
public:
    virtual void boil()
    {
        cout << "nofushanquan" << endl;
    }
    virtual void brew()
    {
        cout << "chokafei" << endl;
    }
    virtual void pour_in_cup()
    {
        cout << "daoru" << endl;
    }
    virtual void put_something()
    {
        cout << "fangdiansha" << endl;
    }
};

void dowork(AbstractDrinking * abs)
{
    abs -> make_drink();
    delete abs;
}
void test()
{
    dowork(new Coffee);
}