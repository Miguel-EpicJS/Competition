#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;

    cin >> t;

    while(t--)
    {
	int n;

	cin >> n;

	vector<int> a, b;

	for (int i = 0; i < n; i++)
	{
	    int x;
	    cin >> x;
	    a.push_back(x);
	}
 
	for (int i = 0; i < n; i++)
	{
	    int x;
	    cin >> x;
	    b.push_back(x);
	}   

	sort(a.begin(), a.end());	
	sort(b.begin(), b.end());	

	long long tot = 0;

	bool ok = false;
	for (int i = 0; i < n; i++)
	{
	    if (a[i] <= b[i])
	    {
		ok = true;
		break;
	    }
	}

	if(ok)
	{
	    cout << tot << "\n";
	    continue;
	}

	tot = 1;
	int used = 0;
	int d =0;
	int mod = 1e9+7;
	for (auto c : a)
	{
	    d  = distance(b.begin(), lower_bound(b.begin(), b.end(), c)); 
	    tot = (tot * (d-used)) % mod;
	    used++;
	}

	cout << tot << "\n";
    }

    return 0;
}

