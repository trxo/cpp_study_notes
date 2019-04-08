#include <iostream>

using namespace std;

class base{
    public:
        virtual void print(){ cout << "In Base" << endl;}
};

class derived:public base{
    public:
        void print(){cout << "In Derived" << endl;}
};

void display(base *pb, void(base::*pf)())
{
    (pb->*pf)();
}

int main()
{
    derived d;
    base *pb = &d;
    void(base::*pf)();
    pf = &base::print;
    display(pb,pf);
}

// In Derived