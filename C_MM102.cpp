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
    double N;
    double R;
    double D;
    double move = 0;
    int count = 0;
    string unit;

    
    cin >> N;
    cin >> unit;
    if(unit == "m")
        N*=100;
    cin >> R;
    cin >> unit;
    if(unit == "m")
        R*=100;
    cin >> D;
    cin >> unit;
    if(unit == "m")
        D*=100;
    while(move < N)
    {
        count++;
        move += R;
        if(move >= N)
            break;
        move -= D;
    }
    cout << count << endl;
    return 0;
}