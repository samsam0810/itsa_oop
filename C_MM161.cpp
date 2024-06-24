#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int fun(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int main()
{
    int n;
    int ans;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(fun(i) > n)
        {
            ans = i-1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}