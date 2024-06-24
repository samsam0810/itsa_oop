#include <iostream>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
using namespace std;

double fun(int n)
{
    if(n == 1)   return 2;
    return 2*fun(n-1)/(1+2*fun(n-1));
}

int main()
{
    int n;
    cin >> n;
    cout << fixed << setprecision(5) << round(fun(n)*100000)/100000 << endl;
    return 0;
}