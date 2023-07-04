#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, t;

    cin >> n >> t;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
    }

    long long low = 0, mid, ans = 0, high = 1e18, sum;
    while(low <= high)
    {
	mid = (low+high)/2;
	sum = 0;
	for (auto i : arr)
	{
	    sum += (mid/i);
	    if (sum >= t) break;
	}
	if (sum >= t)
	{
	    ans = mid;
	    high = mid-1;
	}
	else
	{
	    low = mid+1;
	}
    }

    cout << ans << "\n";

    return 0;
}

