#include <bits/stdc++.h>
#include <type_traits>


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
	long long n, x, y, z;

	cin >> n >> x;
	vector<long long> b;
	vector<pair<long long, long long>> a;
    
	for (int i = 0; i < n; i++)
	{
	    cin >> y;
	    a.push_back({y, i});
	}
	for (int i = 0; i < n; i++)
	{
	    cin >> y;
	    b.push_back(y);
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int k = n - x;

	vector<int> bR(n);

	for (int i = 0; i < n; i++)
	{
	    if (i < k)
	    {
		bR[i] = b[n+i-k];
	    }
	    else
	    {
		bR[i] = b[i-k];
	    }
	}

	int tot = 0;

	
	vector<int> ans(n);

	for (int i = 0; i < n; i++)
	{
	    if (a[i].first > bR[i])tot++;
	    ans[a[i].second] = bR[i];
	}

	if (tot == x)
	{
	    cout << "YES\n";
	    for (auto i : ans)
	    {
		cout << i << " ";
	    }
	    cout << "\n";
	}
	else
	{
	    cout << "NO\n";
	}

	
    }


    return 0;
}

