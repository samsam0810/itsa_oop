#include <iostream>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
using namespace std;

int f(int);
int g(int);

int main()
{
    int n;
    cin >> n;
    cout << f(n) << " " << g(n) << endl;
    return 0;
}

int f(int n)
{
    if(n == 1)  return 2;
    return 3*f(n-1)+g(n-1);
}
int g(int n)
{
    if(n == 1)  return -6;
    return -f(n-1)+g(n-1);
}
