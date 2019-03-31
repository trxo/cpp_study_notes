#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    double a[] = {1.1,4.4,3.3,2.2};
    vector<double>va(a,a+4);
    typedef vector<double>::iterator iterator;
    iterator first = va.begin();
    for( first;first < va.end();first++)  //循环正向输出va
    {
        cout << *first << " ";
    }
    cout << endl;
    for(--first;first > va.begin()-1;first--){ //循环逆向输出va
        cout << *first << " ";
    }
    cout << endl;

    copy(va.begin(),va.end(),ostream_iterator<double>(cout," "));
    cout << endl;

    typedef vector<double>::reverse_iterator reverse_iterator;
    reverse_iterator last = va.rbegin(); //定义逆向泛型指针last并指向va的尾元素
    for(last; last < va.rend(); last++)
    {
        cout << *last << " ";
    }
    cout << endl;
    for(--last; last < va.rbegin() - 1; last--)
    {
        cout << *last << " ";
    }
    copy(va.rbegin(),va.rend(),ostream_iterator<double>(cout," "));
    
} 
// 1.1 4.4 3.3 2.2 
// 2.2 3.3 4.4 1.1 
// 1.1 4.4 3.3 2.2 
// 2.2 3.3 4.4 1.1 
// 2.2 3.3 4.4 1.1 %
