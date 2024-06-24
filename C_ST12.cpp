#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if(n <= m)
    {
        for(int i = n; i <= m; i++)
        {
            for(int j = 0; j < i; j++)
                cout << "*";
            cout << endl;
        }
    }
    else
    {
        for(int i = n; i >= m; i--)
        {
            for(int j = 0; j < i; j++)
                cout << "*";
            cout << endl;
        }
    }
    return 0;
}