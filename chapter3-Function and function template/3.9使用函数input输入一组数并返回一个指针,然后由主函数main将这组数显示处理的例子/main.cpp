#include <iostream>

using namespace std;
float* input(int &);
int main()
{
    int num;
    float *data;
    data = input(num);
    if(data){
        for(int i = 0; i < num; i++)
        {
           cout << data[i] << " ";
        }
        delete data;
    }
}

float * input(int &n)
{
    cout << "Input number:";
    cin >> n;
    if (n <= 0) {
       return NULL;
    }
    float *buf = new float(n);  //根据输入数量申请空间
    if(buf == 0){
        return NULL;            //没申请到则退出
    }
    for(int i = 0; i < n; i++)  //接受输入数据
    {
        cin >> buf[i];
    }
    return buf;
}
