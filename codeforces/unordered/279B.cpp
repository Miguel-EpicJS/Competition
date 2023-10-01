#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, m;

    cin >> n >> m;

    vector<long long> arr;
    long long ans = 0;
    long long curr = 0;
    
    int j = 0;

    for (int i =0 ; i < n; i++)
    {
	long long x;
	cin >> x;
	arr.push_back(x);
	if (x <= m)
	{
	    curr++;
	    m -= x;
	    ans = max(curr, ans);
	}
	else
	{
	    while (m < x || j < i-1)
	    {
		m += arr[j];
		j++;
	    }
	}

    }

    cout << ans << "\n";

    return 0;
}

