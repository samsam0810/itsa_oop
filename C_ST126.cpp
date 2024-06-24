#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    int n;
    cin >> n;
    cin.ignore(32, '\n');
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        if(str[0] < str[1])
        {
            cout << str[0] << endl;
            cout << str[1] << endl;
        }
        else
        {
            cout << str[1] << endl;
            cout << str[0] << endl;
        }
    }
    return 0;
}