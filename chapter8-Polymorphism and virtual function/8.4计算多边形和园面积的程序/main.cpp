#include <iostream>
#include "./shape.cpp"
#include "./square.cpp"
#include "./circle.cpp"
#include "./triangle.cpp"
#include "./rectangle.cpp"

using namespace std;

double total(shape *s[],int n)
{
    double sum = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum += s[i]->area();
    }
    return sum;
    
}


int main()
{
    shape *s[5];
    s[0] = new square(4);
    s[1] = new triangle(3,6);
    s[2] = new rectangle(3, 6);
    s[3] = new square(6);
    s[4] = new circle(10);
    for(int i = 0; i < 5; i++)
    {
        cout << "s[" << i << "]=" << s[i]->area() << endl;
    }
    double sum = total(s,5);
    cout << "The total area is: " << sum << endl;
     
}

// s[0]=16
// s[1]=9
// s[2]=18
// s[3]=36
// s[4]=314.159
// The total area is: 393.159