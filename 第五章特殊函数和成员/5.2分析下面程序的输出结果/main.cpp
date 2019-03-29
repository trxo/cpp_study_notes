#include <iostream>

using namespace std;

class Test{
        static int x;
        int n;
    public:
        Test(){};
        Test(int a, int b){
            x = a;
            n = b;
        };
        static int func(){
            return x;
        };
        static void sfunc(Test &r,int a)
        {
            r.n = a;
        };
        int Getn()
        {
            return n;
        }
};
int Test::x = 25;


int main()
{
    cout << Test::func();
    Test b, c;
    b.sfunc(b,58);
    cout << " " << b.Getn();
    cout << " " << b.func();
    cout << " " << c.func();
    Test a(24, 56);
    cout << " " << a.func() << " " << b.func() << " " << endl;
}

// print
// 25 58 25 25 24 24 