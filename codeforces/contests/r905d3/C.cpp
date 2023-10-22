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
	long long n, k;

	cin >> n >> k;

	vector<long long> arr;

	long long ans = 0;

	long long m = 1e10;

	long long diffs[20];

	memset(diffs, 0, sizeof(diffs));

	for (int i = 0; i < n; i++)
	{
	    long long x;
	    cin >> x;
	    m = min(m, k-(x%k));
	    if (x%k == 0) m = 0;
	    diffs[x%k]++;
	    arr.push_back(x);
	}

	if (k == 4 && diffs[1] >= 2)
	{
	    m = min(m, 2LL);
	}
	if (k == 4 && diffs[2] >= 2)
	{
	    m = 0;
	}
	if (k == 4 && diffs[1] >= 1 && diffs[2] >= 1)
	{
	    m = min(m, 1LL);
	}

	cout << m << "\n";
    }

    return 0;
}

