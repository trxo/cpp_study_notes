#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    double a[] = {1.1,4.4,3.3,2.2},b[4];
    copy(a,a+4,ostream_iterator<double>(cout," ")); //正向输出数组a 以空格隔开
    cout << endl;
    reverse_copy(a, a+4,ostream_iterator<double>(cout," ")); //逆向输出数组a 以空格隔开
    cout << endl;
    copy(a,a+4,b);
    copy(b,b+4,ostream_iterator<double>(cout," ")); //正向输出数组b 以空格隔开
    cout << endl;
    sort(a,a+4); //对数组a进行升幂排序
    copy(a,a+4,ostream_iterator<double>(cout," ")); //正向输出数组a 以空格隔开
    cout << endl;
    reverse_copy(a,a+4,b);
    copy(b,b+4,ostream_iterator<double>(cout," ")); //正向输出数组b 以空格隔开
    return 0;
}

//out
//1.1 4.4 3.3 2.2 
//2.2 3.3 4.4 1.1 
//1.1 4.4 3.3 2.2 
//1.1 2.2 3.3 4.4 
//4.4 3.3 2.2 1.1 %    