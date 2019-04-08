#include <iostream>

using namespace std;

class Point{
    private:
        double x,y;
    public:
        Point();
        Point(double a, double b)
        {
            x = a; y = b;
        }
        void Setxy(double a, double b){
            x = a; y = b;
        }
        void Display()
        {
            cout << x << "\t" << y << endl;
        }
};

int main()
{
    Point p(1.5,2.5);
    p.Display();
}