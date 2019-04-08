#include <iostream>

using namespace std;

void swap(int []);

int main()
{
    int a[] = {3,8};
    swap(a);  //传递数组名a,也就是指针名
    for(int i = 0; i < 2; i++)
    {
       cout << a[i] << endl;
    }
    
}

void swap(int a[]){
    int temp = a[0];
    a[0] = a[1];
    a[1] = temp;
}

//print 
// 8
// 3