#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    float n;
    int x1, x2, y1, y2;

    cin >> n >> x1 >> y1 >> x2 >> y2;

    bool ok = false;

    n = n/2;
    n += 0.5;

    if ((x1 > n && x2 < n) || (x1 < n && x2 > n)) ok = true;
    if ((y1 > n && y2 < n) || (y1 < n && y2 > n)) ok = true;

    if (!ok) cout << "N\n";
    else cout << "S\n";

    return 0;
}

