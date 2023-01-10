#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    
    int t[3];

    cin >> t[0] >> t[1] >> t[2];

    int res[3];
    res[0] = t[0];
    res[1] = t[1];
    res[2] = t[2];

    sort(res, res+3);

    cout << (res[0] == t[0] ? "1" : (res[0] == t[1] ? "2" : "3") ) << "\n";
    cout << (res[1] == t[0] ? "1" : (res[1] == t[1] ? "2" : "3") ) << "\n";
    cout << (res[2] == t[0] ? "1" : (res[2] == t[1] ? "2" : "3") ) << "\n";

    return 0;
}
