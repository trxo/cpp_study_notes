#include <iostream>

using namespace std;

class Two{
    private:
        int y;
    public:
        friend class One;
};

class One{
    private:
        int x;
    public:
        One(int a,Two &r, int b)
        {
            x = a;
            r.y = b;
        }
        void Display(Two &);
};

void One::Display(Two &r)
{
    cout << x << " " << r.y << endl;
}

int main()
{
    Two Obj2;
    One Obj1(23,Obj2,55);
    Obj1.Display(Obj2);
}
// 23 55