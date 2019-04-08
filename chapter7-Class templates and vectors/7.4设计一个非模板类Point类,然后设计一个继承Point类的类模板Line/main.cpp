#include <iostream>

using namespace std;

class Point{
    private:
        int x, y;
    public:
    Point(int a, int b){ x = a; y = b; }
    void display(){ cout << x << " ," << y << endl; }
};

template<typename T>
class Line:public Point{
    private:
        T x2, y2;
    public:
        Line(int a, int b, T c, T d):Point(a,b){ x2 =c; y2 = d; }
        void display() { Point::display(); cout << x2 << ", " << y2 << endl; }
};

int main()
{
    Point a(3,8);
    a.display();
    Line<int>ab(4,5,6,7);
    ab.display();
    Line<double>(4,5,6.5,7.8);
    ab.display();

}

// 3 ,8
// 4 ,5
// 6, 7
// 4 ,5
// 6, 7