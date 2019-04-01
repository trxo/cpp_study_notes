#include <iostream>
#include <vector>

using namespace std;
int main()
{
    char st[11] = "abcdefghij";
    vector<char>a(st,st+10);
    for(int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl << a.capacity() << "," << a.size() << endl;
    a.pop_back();
    a.push_back('W');
    a.push_back('P');
    for(int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl << a.capacity() << "," << a.size() << endl;
    a.clear();
    cout << a.empty() << endl;
}
// a b c d e f g h i j 
// 10,10
// a b c d e f g h i W 
// 20,11
// 1