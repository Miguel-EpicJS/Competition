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

	long long a, b,  n, m, k;

	cin >> n;

	vector<long long> left, right, c;
	for (int i = 0; i < n; i++)
	{
	    cin >> a;
	    left.push_back(a);
	}
	for (int i = 0; i < n; i++)
	{
	    cin >> a;
	    right.push_back(a);
	}
	for (int i = 0; i < n; i++)
	{
	    cin >> a;
	    c.push_back(a);
	}
	
	sort(left.begin(), left.end());
	sort(right.begin(), right.end());
	sort(c.begin(), c.end());

	vector<long long> val_pair_diff;

	for (int i = 0; i < n; i++)
	{
	    val_pair_diff.push_back(right[i] - left[i]);
	}

	sort(val_pair_diff.rbegin(), val_pair_diff.rend());

	long long ans = 0;

	for (int i = 0; i < n; i++)
	{
	    ans += val_pair_diff[i] * c[i];
	}

	cout << ans << "\n";

    }

    return 0;
}

