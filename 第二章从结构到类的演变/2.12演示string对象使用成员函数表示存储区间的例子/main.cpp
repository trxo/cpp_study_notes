#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    string str1 = "wearehere!",str2(str1);  //使用str1初始化str2
    reverse(str1.begin(),str1.end());  //字符串元素逆向
    cout << str1 << endl;   
    copy(str1.begin(),str1.end(),str2.begin()); //原样赋值到str2,str2应能容下str1
    sort(str1.begin(),str1.end());  //默认升幂排序
    cout << str1 << endl;
    cout << str2 << endl;
    reverse_copy(str1.begin(),str1.end(),str2.begin()); //逆向复制到str2
    cout << str2 << endl;

    reverse(str2.begin()+2,str2.begin()+8);
    copy(str2.begin() + 2,str2.begin()+8,ostream_iterator<char>(cout)); //输出逆向后的部分内容
    cout << endl;

    sort(str1.begin(),str1.end(),greater<char>()); //降幂排序
    cout << str1 << endl;
    str1.swap(str2);
    cout << str1 << " " << str2 << endl;
    cout << (*find(str1.begin(),str1.end(),'e') == 'c') << " "
         << (*find(str1.begin(),str1.end(),'O') == 'O') << endl;
}