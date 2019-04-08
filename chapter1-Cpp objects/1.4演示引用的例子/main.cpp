//演示引用的例子
#include <iostream>
using namespace std;
int main(){
    int x = 56;
    int& a = x;
    int& r = a;
    cout << "x =" << x << ", &x" << &x << ",a=" << a << ",&a=" << &a <<",r=" << r << ",&r=" << &r << endl;
    r = 25;
    cout << "x =" << x << ", &x" << &x << ",a=" << a << ",&a=" << &a <<",r=" << r << ",&r=" << &r << endl;
}

//out
//x =56, &x0x7ffeea72550c,a=56,&a=0x7ffeea72550c,r=56,&r=0x7ffeea72550c
//x =25, &x0x7ffeea72550c,a=25,&a=0x7ffeea72550c,r=25,&r=0x7ffeea72550c