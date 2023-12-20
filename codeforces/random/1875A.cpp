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
	long long b, a, n;
	cin >> a >> b >> n;

	vector<long long> tools;

	for(int i = 0; i < n; i++)
	{
	    long long x;
	    cin >> x;
	    tools.push_back(x);
	}

	long long ans = b;

	for (long long i : tools)
	{
	    ans += min(i, a);
	    if (i+1 > a) ans--;
	}

	cout << ans << "\n"; 

    }

    return 0;
}

