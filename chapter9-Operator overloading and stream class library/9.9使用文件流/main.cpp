#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    char ch[15], *p = "abcdefg";
    ofstream myFile;
    myFile.open("test.txt");
    myFile << p;
    myFile << "GoodBye!";
    myFile.close();
    ifstream getText("test.txt");
    int i;
    for(i = 0; i < strlen(p)+8; i++)
    {
        getText >> ch[i];
    }
    getText.close();
    cout << ch;
    
}