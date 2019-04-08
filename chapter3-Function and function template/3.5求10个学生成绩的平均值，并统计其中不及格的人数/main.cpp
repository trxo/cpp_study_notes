#include <iostream>

using namespace std;

typedef double arr[12]; //自定义数组标识符arr

void avecount(arr &b,int n)
{
    double ave(0);
    int count(0);
    for(int i = 0; i < n - 2; i++)
    {
        ave = ave + b[i];
        if(b[i] < 60){
            count++;
        }
    }
    b[n-2] = ave/(n-2);
    b[n-1] = count;
    
}

int main()
{
    arr b = {12,34,56,78,90,98,76,85,64,43};
    avecount(b,12);
    cout << "平均成绩" << b[10] << "分, 不及格人数有" << int(b[11]) << "人。" << endl;
}

// print
// 平均成绩63.6分, 不及格人数有4人。