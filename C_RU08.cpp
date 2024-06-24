#include <iostream>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
using namespace std;

double fun(double n)
{
    if(n/2 < 1)   return n;
    return n+n/2+fun(n/2);
}

int main()
{
    double n;
    cin >> n;
    cout << fixed << setprecision(2) << round(fun(n)*100)/100 << endl;
    return 0;
}