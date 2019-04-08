#include <iostream>

using namespace std;

class str{
    private:
        char *st;
    public:
        str(char *s);
        str( str& s);
        str& operator = (str& a);
        str& operator = (char *s);
        void print() { cout << st << endl; }
        ~str() { delete st; }
};


str::str(char *s) 
{
    st = new char[strlen(s)+1];  //为st申请内存
    strcpy(st,s); //将字符串s复制到内存区
}

str::str(str& a)
{
    st = new char[strlen(a.st)+1];
    strcpy(st,a.st);
}

str& str::operator=( str& a)
{
    if(this == &a)  //防止 a=a 赋值
    {
        return *this;
    }
    delete st;
    st = new char[strlen(a.st)+1];  //不是自身 先释放内存
    strcpy(st,a.st);
    return *this;
}

str& str::operator=(char *s)
{
    delete st;
    st = new char[strlen(s)+1];
    strcpy(st,s);
    return *this;
}





int main()
{   
    str s1("We"),s2("They"),s3(s1);  //调用构造函数和复制构造函数
    s1.print();s2.print();s3.print();
    s2 = s1 = s3;
    s3 = "Go Home!";
    s3 = s3;
    s1.print();s2.print();s3.print();

}

// We
// They
// We
// We
// We
// Go Home!