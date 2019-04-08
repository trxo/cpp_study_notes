#include <iostream>

using namespace std;

template<class T>
class Max4{
    private:
        T a,b,c,d;
        T Max(T a, T b){ return (a > b) ? a : b; };
    public:
        Max4(T,T,T,T);
        T Max(void);
};

template<class T>
Max4<T>::Max4(T x1, T x2, T x3, T x4):a(x1),b(x2),c(x3),d(x4){};
template<class T>
T Max4<T>::Max(void)
{
    return Max(Max(a,b),Max(c,d));
};
int main()
{
    Max4<char>C('W','w','a','A');
    Max4<int>A(-25,-67,-66,256);
    Max4<double>B(1.25,4.3,-8.6,3.5);
    cout << C.Max() << " " << A.Max() << " " << B.Max() << endl;
}

// w 256 4.3