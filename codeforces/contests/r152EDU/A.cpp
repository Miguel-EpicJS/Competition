#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while (t--)
    {
	int x, y, z, n, m;

	cin >> x >> y >> z;
	n = y + z;

	if (x - n == 1 ) cout << x+n << "\n";
	else if ((x-n) > 1) cout << n*2 +1 << "\n";
	else cout << x*2 - 1 << "\n";
    }

    return 0;
}

