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
	long long n, ss[2], x;

	cin >> n;

	vector<long long> arr, prefix(n, 0);
	for (int i = 0; i < n; i++)
	{
	    cin >> x;
	    if (i%2 == 1) x = -x;
	    arr.push_back(x);
	}

	prefix[0] = arr[0];

	for (int i = 1; i < n; i++)
	{
	    prefix[i] += prefix[i-1] + arr[i];
	}
	prefix.push_back(0);

	set<long long> vals(prefix.begin(), prefix.end());

	if(vals.size() == prefix.size()) cout << "NO\n";
	else cout << "YES\n";

    }

    return 0;
}

