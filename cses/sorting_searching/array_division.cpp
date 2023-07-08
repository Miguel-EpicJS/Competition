#include <bits/stdc++.h>

using namespace std;

int n, k;

bool verify(long long mid, vector<long long> &vals)
{
    long long g = 0;
    long long s = 0;
    for (int i = 0; i < n; ++i)
    {
	if (vals[i] > mid) return false;
	if (s + vals[i] > mid) ++g, s = 0;
	s += vals[i];
    }
    if (s > 0) ++g;
    return g <= k;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> k;

    vector<long long> vals(n);

    long long tot = 0;
    long long m   = 0;

    for (int i = 0; i < n; i++)
    {
	cin >> vals[i];
	m += vals[i];
    }

    long long low = 0, mid, high = m, ans;

    while (low <= high)
    {
	mid = (low+high)/2;
	if (verify(mid, vals))
	{
	    high = mid-1;
	    ans = mid;
	}
	else
	{
	    low = mid+1;
	}
    }

    cout << ans;

    return 0;
}

