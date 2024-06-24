#include <iostream>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    int n;
    int remain = 0;
    int sum = 0;
    cin >> n;
    while(n != 0)
    {
        sum += n;
        remain += n;
        n = remain/3;
        remain = remain%3;
    }
    cout << sum << endl;
}