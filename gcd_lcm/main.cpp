#include <iostream>
#include "gcdlcm.h"

using namespace std;

int main()
{
    int m,n;

    cout << "Enter the numbers (space separated)." << endl;
    // cout << "m: " ;
    cin >> m >> n;
    cout << "GCD: " << gcd(m,n) << endl;
    cout << "LCM: " << lcm(m,n) << endl;
    return 0;
}

