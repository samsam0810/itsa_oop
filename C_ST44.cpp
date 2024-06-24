#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string str;

    getline(cin, str);
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    cout << str << endl;
    return 0;
}