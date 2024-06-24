#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int num;
    string str;

    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin >> str;
        reverse(str.begin(), str.end());
        cout << str << endl;
    }
    return 0;
}