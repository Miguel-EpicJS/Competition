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

	long long a, b, c, x, y, z, n, m, k;

	cin >> n;

	vector<long long> arr;

	for (int i = 0; i < n*2; i++)
	{
	    cin >> x;
	    arr.push_back(x);
	}

	sort(arr.begin(), arr.end());

	deque<int> q;
	for (auto i : arr)
	{
	    q.push_back(i);
	}

	vector<pair<long long, long long>> points;

	while(!q.empty())
	{
	    points.push_back({q.front(), q.back()});
	    q.pop_front();
	    q.pop_back();
	}
    

	long long ans = 0;
	for (int i = 1; i < n; i++)
	{
	    ans += abs(points[i].first - points[i-1].first) + abs(points[i].second - points[i-1].second);
	}

	cout << ans << "\n";

	for (auto i : points)
	{
	    cout << i.first << " " << i.second << "\n";
	}

    }

    return 0;
}

