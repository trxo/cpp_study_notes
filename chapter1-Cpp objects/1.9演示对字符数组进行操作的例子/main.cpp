#include <iostream>

using namespace std;

int main()
{
    char a[] = "wearehere!",b[11];
    reverse(a,a+10); //数组元素逆向
    copy(a,a+10,ostream_iterator<char>(cout));
    cout << endl;
    copy(a,a+11,b); //原样复制到b数组
    sort(a,a+10); //默认升幂排序
    cout << a << endl;  //输出排序结果
    cout << b << endl; //输出数组b的内容
    reverse_copy(a,a+10,b); //逆向复制到b数组
    cout << b << endl;

    reverse(b+2,b+8); //数组b部分逆向
    copy(b+2,b+8,ostream_iterator<char>(cout)); //输出数组b逆向后的部分内容
    cout << endl;
    sort(a,a+10,greater<char>()); //降幂排序
    cout << a << endl;
    cout << (*find(a,a+10,'e') == 'e') << " "
    << (*find(a,a+10,'O') == 'O') << endl;

}
//print
// !ereheraew
// !aeeeehrrw
// !ereheraew
// wrrheeeea!
// eeeehr
// wrrheeeea!
// 1 0


//doc
//字符串数组需要一个结束符，正向复制可以不需要复制结束符，但逆向复制时要注意，不能将这个结束符逆向复制，否则字符串的第一位变成结束标志，使其成为空字符