#include <iostream>

using namespace std;

class ConstFun{
    public:
        int f5() const {return 5; };
        int Obj() {return 45; };
};

int main()
{
    ConstFun s;
    const int i = s.f5();
    const int j = s.Obj();
    int x = s.Obj();
    int y = s.f5();
    cout << i << " " << j << " " << x << " " << y;
    const ConstFun d;
    int k = d.f5();
    cout << " k = " << k << endl;
}
// 5 45 45 5 k = 5