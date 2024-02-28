#include"cpp.h"
class Cpu
{
public:
    virtual void caculate() = 0;
};


class VIdeocard
{
public:
    virtual void display() = 0;
};


class Memory
{
public:
    virtual void store() = 0;
};


class Computer
{
private:
    Cpu * m_cpu;
    VIdeocard *m_vc;
    Memory *m_mem;
public:
    Computer(Cpu * cpu, VIdeocard * vc, Memory *mem)
    {
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }

    void work()
    {
        m_cpu -> caculate();
        m_vc -> display();
        m_mem -> store();
    }
    ~Computer()
    {
        if (m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }
        if (m_vc != NULL)
        {
            delete m_vc;
            m_vc = NULL;
        }
        if (m_mem != NULL)
        {
            delete m_mem;
            m_mem = NULL;
        }
    }
};


class IntelCpu : public Cpu 
{
public:
    virtual void caculate()
    {
        cout << "intelcpu" << endl;
    }
};
class Intelvc : public VIdeocard 
{
public:
    virtual void display()
    {
        cout << "intelvc" << endl;
    }
};
class Intelmem : public Memory
{
public:
    virtual void store()
    {
        cout << "intelmem" << endl;
    }
};

void test()
{
    Cpu * intelCpu = new IntelCpu;
    VIdeocard * intelvc = new Intelvc;
    Memory * intelmem = new Intelmem;


    Computer * computer1 = new Computer(intelCpu, intelvc, intelmem);
    computer1 -> work();
    delete computer1;

    // Õâ×Ô¼ºÐ´
    Computer * computer2 = new Computer(new LenovoCPU, new LenovoVC, new LenovoMEM);
    computer2 ->work();
    delete computer2;
}