#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char st[11] = "abcdefghij";
    vector<char>a(st,st+10);
    vector<char>::iterator p;
    p = a.begin();
    a.insert(p+3,'X');
    copy(a.begin(),a.end(),ostream_iterator<char>(cout, " "));
    cout << endl;
    // cout << *p << endl;
    p = a.begin(); //??
    // cout << *p << endl;
    a.insert(p,3,'A');  //在a[0]前插入3个A
    copy(a.begin(),a.end(),ostream_iterator<char>(cout," "));
    cout << endl;
    a.erase(p+8); //删除a[8]
    copy(a.begin(),a.end(),ostream_iterator<char>(cout," "));
}
// a b c X d e f g h i j 
// A A A a b c X d e f g h i j 
// A A A a b c X d f g h i j %  
