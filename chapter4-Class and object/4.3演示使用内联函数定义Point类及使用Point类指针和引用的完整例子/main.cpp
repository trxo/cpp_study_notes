#include <iostream>
using namespace std;
class Point{
    private:
        int x, y;
    public:
        void Setxy(int a, int b)   //无返回值的内联共有成员函数
        { 
            x = a;
            y = b;
        }
        void Move(int a, int b)
        {
            x = x + a;
            y = y +b;
        }
        void Display()  //无返回值的内联公有成员函数
        {
            cout << x << "," << y << endl;
        }
        int Getx()
        {
            return x;
        }
        int Gety()
        {
            return y;
        }
};

void print(Point *a)  //类指针作为print函数的参数定义重载函数
{
    a->Display();
}

void print(Point &a)  //类引用作为print函数的参数定义重载函数
{
    a.Display();
}

int main()
{
    Point A,B, *p;
    Point &RA = A;
    A.Setxy(25,55);
    B = A;
    p = &B;
    p->Setxy(112,115);
    print(p);
    p->Display();
    RA.Move(-80,23);
    print(A);
    print(&A);
}
