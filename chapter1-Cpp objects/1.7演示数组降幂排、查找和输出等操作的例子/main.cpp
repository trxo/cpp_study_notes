#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    double a[] = {1.1,4.4,3.3,2.2};
    sort(a,a+4); //升幂排序
    copy(a,a+4,ostream_iterator<double>(cout,"\n"));
    sort(a,a+4,greater<double>()); //降幂排序 
    copy(a,a+4,ostream_iterator<double>(cout,"\n"));
    double *x = find(a,a+4,4.4);
    if (x==a+4) {
        cout << "没有值为4.4的数组元素";
    }else{
        cout << "有值为" << *x << "的数组元素";
    }
    
    return 0;
}

// out
// 1.1
// 2.2
// 3.3
// 4.4
// 4.4
// 3.3
// 2.2
// 1.1
// 有值为4.4的数组元素%