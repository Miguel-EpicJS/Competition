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
	long long a, b, c, m, n, k, x, y, z, w;

	vector<pair<long long, long long>> arr;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
	    cin >> x >> y;
	    arr.push_back({x, y});
	}

	k = arr[0].first;
	w = arr[0].second;
	long long ans = k;
	for (int i = 1; i < n; i++)
	{
	    if (arr[i].first >= k && arr[i].second >= w) ans = -1;
	}

	cout << ans << "\n";
    }

    return 0;
}

