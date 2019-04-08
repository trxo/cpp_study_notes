#include <iostream>

using namespace std;

class Point{
        int x, y;
    public:
        void Set(int a,int b)
        {
            x = a;
            y = b;
        };
        int Getx()
        {
            return x;
        };
        int Gety()
        {
            return y;
        };


};
class Rectangle{
    Point Loc;
    int H, W;
    public:
        void Set(int x, int y, int h, int w);
        Point* GetLoc();
        int GetHeight()
        {
            return H;
        };
        int GetWidth(){
            return W;
        };
};
void Rectangle::Set(int x, int y, int h, int w)
{
    Loc.Set(x,y);
    H = h;
    W = w;
};
Point* Rectangle::GetLoc(){
    return &Loc;
};

int main()
{
    Rectangle rect;
    rect.Set(10,2,25,20);
    cout << rect.GetHeight() << "," << rect.GetWidth() << ",";
    Point *p = rect.GetLoc();
    cout << p->Getx() << "," << p->Gety() << endl;
}

//25,20,10,2