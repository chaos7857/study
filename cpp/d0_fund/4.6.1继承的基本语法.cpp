#include"cpp.h"

class Base
{
private:
    
public:
    Base()
    {
        cout << "welcome" << endl;
    }
    void header()
    {
        cout << "header" << endl;
    }
    void footer()
    {
        cout << "foot" << endl;

    }

};


class Python:public Base
{
private:
    
public:
    void content()
    {
        cout << "contetn" << endl;
    }
};
void test()
{
    Python py;

}



int main()
{
    test();
    return 0;
}





















