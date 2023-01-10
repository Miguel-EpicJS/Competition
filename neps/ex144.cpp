#include <iostream>
#include <cmath>

#include <iomanip>

using namespace std;

int main()
{
    float pi = 3.1416;

    float r;

    cin >> r;

    cout << fixed;
    cout << setprecision(2);
    cout << pi * r* r*1.0 << "\n";
}

