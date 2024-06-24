#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int x, n, tmp;
    string str;
    while(cin >> x >> n)
    {
        while(n != 0)
        {
            tmp = n%x;
            if(tmp == 10)
                str += 'A';
            else if(tmp == 11)
                str += 'B';
            else if(tmp == 12)
                str += 'C';
            else if(tmp == 13)
                str += 'D';
            else if(tmp == 14)
                str += 'E';
            else if(tmp == 15)
                str += 'F';
            else
                str += to_string(tmp);
            n = n/x;
        }
        reverse(str.begin(), str.end());
        cout << str << endl;
        str = "";
    }
}