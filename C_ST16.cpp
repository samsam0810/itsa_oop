#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        if(i == 0)
            cout << str[i];
        else
            cout << "   " << str[i]; 
    }
    cout << endl;
    return 0;
}