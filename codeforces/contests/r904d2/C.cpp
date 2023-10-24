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

	long long n, m;

	cin >> n >> m;

	vector<array<long long, 2>> arr;

	for (int i = 0; i < n; i++)
	{
	    long long x, y;
	    cin >> x >> y;
	    arr.push_back({x, 0});
	    arr.push_back({y, 1});
	}

	sort(arr.begin(), arr.end());

	long long c = 0, curM = 0, mn = 1e10, ans = 0, curMn = 1e10;

	for (int i = 0; i < arr.size(); i++)
	{

	}

	cout << ans << "\n";

    }

    return 0;
}

