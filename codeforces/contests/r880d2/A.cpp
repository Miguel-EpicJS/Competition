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
	int n;
	cin >> n;

	map<int, int> vals;
	for (int i = 0; i < 101; i++) vals[i] = 0;
	while(n--)
	{
	    int x;
	    cin >> x;
	    vals[x] += 1;
	}

	vector<int> y;

	for (auto i : vals)
	{
	    y.push_back(i.second);
	}
	string ans = "YES\n";
	for (int i = 0; i < y.size()-1; i++)
	{
	    if (y[i+1] > y[i])
	    {
		ans = "NO\n";
		break;
	    }
	}

	cout << ans;
    }

    return 0;
}

