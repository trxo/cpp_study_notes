#include <iostream>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        Point();
        Point(int,int);
};

Point::Point():x(0),y(0)
{
    cout << "Initializing default" << endl;
}

Point::Point(int a,int b):x(a),y(b)
{
    cout << "Initializing " << a << ", " << b << endl;
}



int main()
{
    Point *ptr1 = new Point;
    Point *ptr2 = new Point(5,7);
    delete ptr1;
    delete ptr2;
}

// print
// Initializing 0, 0
// main func start ...
// Initializing default
// Initializing 15, 25
// Initializing default
// Initializing default
// Initializing 5, 7
// Initializing 8, 12