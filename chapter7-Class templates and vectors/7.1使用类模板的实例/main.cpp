#include <iostream>

using namespace std;


template <class T>
class TAnyTemp{
    T x,y;
    public:
        TAnyTemp(T X,T Y):x(X),y(Y){} //构造函数
        T getx(){ return x; };
        T gety(){ return y; };
};

int main()
{
    TAnyTemp<int>test(123,456);
    cout << test.getx() << endl;
}