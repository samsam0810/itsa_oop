#include <iostream>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

double func(double T, int time)
{
    if(time == 1)   return T+2.71828;
    return func(T, time-1)+time*2.71828;
}
int main()
{
    int n;
    double T;
    int time;
    int count = 0;
    string str;
    string substr;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        count = 0;
        cin >> str;
        cin.ignore(32, '\n');
        stringstream ss(str);
        while(getline(ss, substr, ','))
        {
            if(count == 0)
                T = stof(substr);
            else if(count == 1)
                time = stoi(substr);
            count++;
        }
        cout << fixed << setprecision(4) << round(func(T, time)*10000)/10000 << endl; 
    }
}
