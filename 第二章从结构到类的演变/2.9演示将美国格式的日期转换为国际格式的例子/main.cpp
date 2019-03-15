#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter the date in American format "
         << "(e.g, December 25,2002)";
    string Date;
    getline(cin,Date,'\n');
    int i = Date.find(" ");
    string Month = Date.substr(0,i);
    int k = Date.find(",");
    string Day = Date.substr(i+1,k-i-1);
    string Year = Date.substr(k)
}