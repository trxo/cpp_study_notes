#include <iostream>
// #include <algorithm>
// #include <functional>

using namespace std;

int main(){
    double a[] = {1.1, 4.4, 3.3, 2.2},b[8] = {8};
    copy(a+2,a+4,ostream_iterator<double>(cout," ")); //输出a[2] 和 a[3]
    cout << endl;
    reverse_copy(a+1,a+4,ostream_iterator<double>(cout," ")); //输出a[3]到a[1]
    cout << endl;
    copy(a,a+4,&b[4]);    //将数组复制到b数组的尾部
    copy(b,b+8,ostream_iterator<double>(cout," ")); //输出数组b
    cout << endl;
    sort(a+1,a+3);                                  //对部分数组升幂排序
    copy(a,a+4,ostream_iterator<double>(cout," "));
    cout << endl;
    sort(b,b+6,greater<double>()); //对部分数组降幂排序
    copy(b,b+8,ostream_iterator<double>(cout," "));
    cout << endl;
    return 0;
}
// print
// 3.3 2.2
// 2.2 3.3 4.4
// 8 0 0 0 1.1 4.4 3.3 2.2
// 1.1 3.3 4.4 2.2
// 8 4.4 1.1 0 0 0 3.3 2.2