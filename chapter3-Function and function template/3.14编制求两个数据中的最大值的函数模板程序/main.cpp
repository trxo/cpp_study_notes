#include <iostream>

using namespace std;

template <class T>
T maxt(T m1,T m2){
    return m1 > m2 ? m1 : m2;
}
int main()
{
    cout << maxt(2,5) << "\t" << maxt(2.0,5.0) << "\t" << maxt('w','a') << "\t" << maxt("ABC","ABD") << endl;
}


// print
//5       5       w       ABD