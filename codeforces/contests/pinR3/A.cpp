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

	long long a, b, c, n, m, k;

	cin >> n;

	vector<pair<long long, long>> arr;

	set<int> sigX, sigY;

	for (int i = 0; i < n; i++)
	{
	    cin >> a >> b;
	    arr.push_back({a, b});

	    if (a > 0) sigX.insert(1);
	    if (a < 0) sigX.insert(-1);
	    if (b > 0) sigY.insert(1);
	    if (b < 0) sigY.insert(-1);
	}

	if (sigX.size() + sigY.size() == 4) cout << "NO\n";
	else cout << "YES\n";

    }

    return 0;
}

