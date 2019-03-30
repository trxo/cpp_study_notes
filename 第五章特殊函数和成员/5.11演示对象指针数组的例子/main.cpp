#include <iostream>

using namespace std;

class Test{
    int num;
    double f1;
    public:
        Test(int n){ num = n; };
        Test(int n,double f) { num = n;f1 = f; };
        int GetNum(){ return num; };
        double GetF(){ return f1; };
};

int main()
{
    Test *one[2] = {new Test(2), new Test(4)};
    Test *two[2] = {new Test(1,3.2),new Test(5,9.5)};
    for(int i = 0; i < 2; i++)
    {
        cout << " one[" << i << "]=" << one[i]->GetNum() << endl;
    }
        for(int i = 0; i < 2; i++)
    {
        cout << " two[" << i << "]=" << two[i]->GetNum() << "," << two[i]->GetF() << ")" << endl;
    }
}
// one[0]=2
//  one[1]=4
//  two[0]=1,3.2)
//  two[1]=5,9.5)