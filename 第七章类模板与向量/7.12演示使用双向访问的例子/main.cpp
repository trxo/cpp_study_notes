#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char st[11] = "abcdefghij";
    vector<char>a(st,st+10);
    vector<char>::iterator p;
    p = a.begin();
    vector<char>::reverse_iterator ps; //定义逆向泛型指针
    for(p = a.begin(); p!=a.end(); ++p)
    {
        cout << *p << " ";
    }
    cout << endl;
    for(p = a.end() - 1; p!=a.begin()-1; --p)
    {
        cout << *p << " ";
    }
    cout << endl;
    for(ps = a.rbegin(); ps != a.rend(); ++ps)
    {
        cout << *p << " ";
    }
    cout << endl;
    for(--ps; ps != a.rbegin() - 1; --ps)
    {
        cout << *ps << " ";
    }
    
    
    
    
}
// a b c d e f g h i j 
// j i h g f e d c b a 
          
// a b c d e f g h i j %  