#include <iostream>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    int n;
    int tmp;
    cin >> n;
    tmp = n;
    for(int i = 1; i < 6; i++)
    {
        cin >> n;
        if(tmp < n)
            tmp = n;
    }
    cout << tmp << endl;
    return 0;
}
