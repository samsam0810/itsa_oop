#include <iostream>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
using namespace std;

float fun(int n)
{
    if(n == 1)  return 1;
    else return fun(n-1)/2 + 1;
}

int main()
{
    int n;
    cin >> n;
    cout << fixed << setprecision(5) << fun(n) << endl;
    return 0;
}