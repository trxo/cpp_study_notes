#include <iostream>
#include <complex>
#include <string>

using namespace std;

template <class T>
void printer(complex <T> a)
{
    string str1("real is "),str2 = "image is ";
    cout << str1 << a.real() << ',' << str2 << a.imag() << endl;
}