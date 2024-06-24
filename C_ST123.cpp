#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    int n;
    int count = 0;
    string str;
    string tmp;
    cin >> n;
    cin.ignore(32, '\n');
    for(int i = 0; i < n; i++)
    {
        getline(cin, str);
        for(int j = 0; j < str.size(); j++)
            str[j] = toupper(str[j]);
        tmp = str;
        reverse(str.begin(), str.end());
        if(str == tmp)  count++;
    }
    cout << count << endl;
    return 0;
}