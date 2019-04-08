#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    double a[] = {1.1,4.4,3.3,2.2};
    vector<double>va(a,a+4),vb(4);
    copy(va.begin(),va.end(),ostream_iterator<double>(cout," ")); //正向输出va
    cout << endl;
    reverse_copy(va.begin(),va.end(),ostream_iterator<double>(cout," "));
    cout << endl;
    reverse_copy(va.begin(),va.end(),vb.begin());
    cout << endl;
    copy(vb.begin(),vb.end(),ostream_iterator<double>(cout," ")); //正向输出vb
    cout << endl;
    sort(va.begin(),va.end()); //va升幂排序
    sort(vb.begin(),vb.end(),greater<double>());
    copy(va.begin(),va.end(),ostream_iterator<double>(cout," ")); //正向输出va
    cout << endl;
    copy(vb.begin(),vb.end(),ostream_iterator<double>(cout," ")); //正向输出va
    cout << endl;
    va.swap(vb); //va和vb交换
    copy(va.begin(),va.end(),ostream_iterator<double>(cout," ")); //正向输出va
    cout << endl;
    copy(vb.begin(),vb.end(),ostream_iterator<double>(cout," ")); //正向输出va
    cout << endl;
    cout << *find(va.begin(),va.end(),4.4);

}

// 1.1 4.4 3.3 2.2 
// 2.2 3.3 4.4 1.1 

// 2.2 3.3 4.4 1.1 
// 1.1 2.2 3.3 4.4 
// 4.4 3.3 2.2 1.1 
// 4.4 3.3 2.2 1.1 
// 1.1 2.2 3.3 4.4 
// 4.4%   