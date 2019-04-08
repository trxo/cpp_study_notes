#include <iostream>

using namespace std;

struct Point{
    private:
        double x,y;
    public:
    void Setxy(double a,double b){
        x=a;
        y=b;
    }
    void Display(){
        cout << x << "\t" << y << endl;
    }

};

int main()
{
    Point p;
    p.Setxy(10.1,10.2);
    p.Display();
}