#include <iostream>

using namespace std;

void swap(string &,string &);

int main()
{
    string str1("现在"),str2("过去");
    swap(str1,str2);
    cout << "返回后的str1=" << str1 << ",str2=" << str2 << endl;
}

void swap(string &a,string &b)
{
    string temp = a;
    a = b;
    b = temp;
}

// print
// 返回后的str1=过去,str2=现在