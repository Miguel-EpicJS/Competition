#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int a[3];

    cin >> n;

    cin >> a[0] >> a[1] >> a[2];

    sort(a, a+3);

    int p[3];

    p[0] = a[0];
    p[1] = p[0] + a[1];
    p[2] = p[1] + a[2];

    if (p[2] <= n) cout << "3\n";
    else if (p[1] <= n) cout << "2\n";
    else if (p[0] <= n) cout << "1\n";
    else cout << "0\n";

    return 0;
}

