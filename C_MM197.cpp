#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double n;
    cin >> n;
    cout << fixed << setprecision(3) << round((n/14)*1000)/1000 << endl;
    return 0;
}