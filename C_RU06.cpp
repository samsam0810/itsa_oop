#include <iostream>
#include <algorithm>
#include <cctype>
#include <cmath>
using namespace std;

int fun(int n)
{
    if(n == 0 || n == 1)
        return n+1;
    return fun(n-1)+fun(floor((float)n/2));
}

int main()
{
    int n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}