#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;
    while(n != 0)
    {
        count += n%2;
        n = n/2;
    }
    cout << "The number of bits is " << count << "." << endl;
    return 0;
}