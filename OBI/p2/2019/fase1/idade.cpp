#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x, y;

    cin >> n >> x >> y;

    int a[3];
    a[0] = x;
    a[1] = y;
    a[2] = n-x-y;

    sort(a, a+3);

    cout << a[2] << "\n";

    return 0;
}

