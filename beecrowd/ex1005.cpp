#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    cout << fixed << setprecision(5);

    float x, y;
    cin >> x >> y;

    x *= 3.5;
    y *= 7.5;

    cout << "MEDIA = " << (x+y) / 11.0 << "\n";

    return 0;
}
