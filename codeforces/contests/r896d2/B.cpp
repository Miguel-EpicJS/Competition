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
	int a, b, c, n, m, k, x, y, z, w;

	cin >> n >> k >> a >> b;

	vector<pair<long long, long long>> pos;

	for (int i = 0; i < n; i++)
	{
	    cin >> x >> y;
	    pos.push_back({x, y});
	}

	if (a <= k && b <= k)
	{
	    cout << "0\n";
	}
	else
	{
	    long long val1 = INT_MAX;
	    for (int i = 0; i < k; i++)
	    {
		val1 = min(val1, abs(pos[i].first-pos[a-1].first) + abs(pos[i].second-pos[a-1].second));
	    }
	    long long val2 = INT_MAX;
	    for (int i = 0; i < k; i++)
	    {
		val2 = min(val2, abs(pos[i].first-pos[b-1].first) + abs(pos[i].second-pos[b-1].second));
	    }

	    cout << min({val1 + val2, abs(pos[a-1].first-pos[b-1].first) + abs(pos[a-1].second-pos[b-1].second)})  << "\n";
	}

    }

    return 0;
}

