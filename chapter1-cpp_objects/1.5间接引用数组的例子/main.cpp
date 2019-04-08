//间接引用数组的例子
#include <iostream>

using namespace std;

typedef double arr[10];

int main()
{
    arr a = {1,2,3,4,5,6,7,8,9,10};
    arr &b = a;
    a[2] = 100;
    for(int i = 0; i < 10; i++)
    {
        cout << b[i] << " ";
    }
    
    return 0;
}


//out
//1 2 100 4 5 6 7 8 9 10 