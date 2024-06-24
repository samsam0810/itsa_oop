#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    string s, tmp;
    getline(cin , s);
    tmp = s;
    reverse(s.begin(), s.end());
    if(tmp == s)
        cout << tmp <<" is a palindrome." << endl;
    else
        cout << tmp <<" is not a palindrome." << endl;
    return 0;
}