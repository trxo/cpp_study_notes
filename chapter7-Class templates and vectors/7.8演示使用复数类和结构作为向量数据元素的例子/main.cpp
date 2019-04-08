#include <iostream>
#include <vector>
#include <complex>

using namespace std;

struct st
{
    int a,b;
}a[] = {{2,5},{4,8}};


int main()
{
    complex<float>num[] = {complex<float>(2,3),complex<float>(3.5,4.5)};
    vector<complex<float> *>vnum(2);
    vnum[0] = &num[0];
    vnum[1] = &num[1];
    for(int i = 0; i < 2; i++)
    {
       cout << "real is " << vnum[i]->real() << ",imag is " << vnum[i]->imag() << endl;
    }
    vector<st*>cp(2);
    cp[0] = &a[0];
    cp[1] = &a[1];
    for(int i = 0; i < 2; i++)
    {
        cout << "a is " << cp[i]->a << ",b is " <<cp[i]->b << endl;
    }
    
}

// real is 2,imag is 3
// real is 3.5,imag is 4.5
// a is 2,b is 5
// a is 4,b is 8