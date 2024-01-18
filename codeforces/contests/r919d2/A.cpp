#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while(t--)
    {
	long long x, y, z, n, m;

	cin >> n;

	vector<long long> arr, nots;

	long long mx = INT_MAX, mn = INT_MIN;

	for (int i = 0; i < n; i++)
	{
	    cin >> x>> y;

	    if (x == 1) mn = max(mn, y);
	    if (x == 2) mx = min(mx, y);
	    if (x == 3) nots.push_back(y);
	}

	long long ans = mx - mn + 1;

	for (auto i : nots)
	{
	    if (i >= mn && i <= mx) ans--;
	}

	if (ans <= 0) ans = 0;

	cout << ans << "\n";
    }

    return 0;
}

