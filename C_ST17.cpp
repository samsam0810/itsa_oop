#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    string tmp;
    cin >> str;
    tmp = str;
    reverse(str.begin(), str.end());
    if(tmp == str)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
