#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);

    long long x1, y1, x2, y2;
    long long x12, y12, x22, y22;

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x12 >> y12 >> x22 >> y22;

    long long a = min(x12, x1);
    long long b = max(x2, x22);
    long long c = min(y1, y12);
    long long d = max(y2, y22);

    long long e = max(b-a, d-c);

    cout << e * e << "\n";

    return 0;
}

