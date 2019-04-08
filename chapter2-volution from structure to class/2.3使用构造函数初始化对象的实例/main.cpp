#include <iostream>

using namespace std;

struct Point{
    private:
        double x,y;
    public:
        Point(){};
        Point(double a,double b)
        {
            x = a; y = b;
        }
        void Setxy(double a, double b)
        {
            x = a; y = b;
        }
        void Display()
        {
            cout << x << "\t" << y << endl;
        }
};

int main()
{
    Point p(10.5,11.5);
    p.Display();

}