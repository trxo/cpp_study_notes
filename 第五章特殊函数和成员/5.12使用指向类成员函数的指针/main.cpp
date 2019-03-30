#include <iostream>

using namespace std;

class A{
    private:
        int val;
    public:
        A(int i){ val = i; };
        int value(int a){ return val + a; };
};

int main()
{
    int( A::*pfun )( int ); //指向A的成员函数的指针
    pfun = &A::value;   //此处应去函数地址 教材上未加&符号 编译报错
    A obj(10);
    cout << (obj.*pfun)(15) << endl;
    A *pc = &obj;
    cout << (pc->*pfun)(15) << endl;
}
// 25
// 25