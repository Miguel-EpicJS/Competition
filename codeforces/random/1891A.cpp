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
	int n;

	cin >> n;

	vector<long long> arr;

	for (int i = 0; i < n; i++)
	{
	    int x;
	    cin >> x;

	    arr.push_back(x);
	}

	if (is_sorted(arr.begin(), arr.end()))
	{
	    cout << "YES\n";
	}
	else
	{
	    long long k = 10000;
	    for (int i = 6; i >= 0; i--)
	    {
		if ((1 << i) >= n) continue;
		for (int j = 0; j < (1<<i); j++ )
		{
		    arr[j] -= k;
		}
	    }
	    bool ok = true;
	    for (int i = 1; i < n; i++)
	    {
		if (arr[i] < arr[i-1]) ok = false;
	    }

	    if (ok) cout << "YES\n";
	    else cout << "NO\n";
	    
	}
    }

    return 0;
}

