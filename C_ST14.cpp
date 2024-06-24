#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i; j++)
            cout << " ";
        if(i%2 == 1)
        {
            for(int j = 1; j <= i; j++)
                cout << j;
        }
        else
            for(int j = i; j >= 1; j--)
                cout << j;
        cout << endl;
    }
    return 0;
}