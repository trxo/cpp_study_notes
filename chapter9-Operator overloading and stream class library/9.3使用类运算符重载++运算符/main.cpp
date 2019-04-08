#include <iostream>

using namespace std;

class number{
    private:
        int num;
    public:
        number(int i) { num = i;}
        int operator++();
        int operator++(int);
        void print(){ cout << "num=" << num << endl;}
};

int number::operator++()
{
    num++;
    return num;
}
int number::operator++(int) 
{
    int i = num;
    num++;
    return i;
}
int main()
{
    number n(10);
    int i = ++n;
    cout << "i=" << i << endl;
    n.print();
    i = n++;
    cout << "i=" << endl;
    n.print();
}
// i=11
// num=11
// i=
// num=12