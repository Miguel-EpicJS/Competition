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
	long long n;

	cin >> n;

	vector<long long> arr, pos, mod(n, 0);

	for (int i = 0; i < n; i++)
	{
	    long long x;
	    cin >> x;
	    arr.push_back(x);
	    pos.push_back(i+1);
	}

	int ans = n;
	bool ok = false;
	int m = 0;
	for (int i = 0; i < n; i++)
	{
	    m+=mod[i];
	    if (arr[i] == pos[i]+m) m=0, ans++, mod[i]++, i = -1;
	}

	cout << ans << "\n";
    }

    return 0;
}

