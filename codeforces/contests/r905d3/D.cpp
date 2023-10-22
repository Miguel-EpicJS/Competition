#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    t=1;
    //cin >> t;

    while(t--)
    {

	long long n, x, y;
	char op;

	cin >> n;

	multiset<long long> starts, ends;
	multiset<pair<long long, long long>> segs;
	int last = -1;
	for (int i = 0; i < n; i++)
	{
	    cin >> op >> x >> y;

	    if (op == '+') segs.insert({x, y}), starts.insert(x), ends.insert(y);
	    else segs.erase(segs.find({x, y})), starts.erase(starts.find(x)), ends.erase(ends.find(y));

	    
	    if (op == '+')
	    {
		if (last == 1)
		{
		    cout << "YES\n";
		}
		else if (*(ends.begin()) < x || *(starts.rbegin()) > y)
		{
		    last = 1;
		    cout << "YES\n";
		}
		else
		{
		    last = 0;
		    cout << "NO\n";
		}
    	    }
	    else
	    {
		if (last == 0)
		{
		    cout << "NO\n";
		}
		else
		{
		    last = 0;
			for (auto k : segs)
		    {
			if (*(ends.begin()) < k.first || *(starts.rbegin()) > k.second)
			{
			    last = 1;
			    cout << "YES\n";
			    break;
			}
		    }
		    if (last == 0) cout << "NO\n";
		}
	    }

	}
    
    }

    return 0;
}

