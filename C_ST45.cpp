#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        str[0] = tolower(str[0]);
        reverse(str.begin(), str.end());
        str[0] = toupper(str[0]);
        cout << str << endl;
    }
    return 0;
}