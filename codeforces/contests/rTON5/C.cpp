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

	vector<int> nmax(n+1, -1), nmin(n+1, n+10);
	vector<vector<int>> tnmax(n+1), tnmin(n+1);
	vector<pair<int, int>> rng;

	for (int i = 1; i <= n; i++)
	{
	    int x;
	    cin >> x;
	    nmax[x] = max(i, nmax[x]);
	    nmin[x] = min(i, nmin[x]);

	    tnmax[x].push_back(i);
	    tnmin[x].push_back(i);
	}
	for (int i = 0; i <= n; i++)
	{
	    if (nmax[i] != -1 && nmin[i] != n + 10 && nmax[i] != nmin[i])
	    {
		rng.push_back({nmax[i] - nmin[i]+1, i});
	    }
	}
	if (rng.size() == 0)
	{
	    cout << "0\n";
	    continue;
	}

	sort(rng.rbegin(), rng.rend());

	int ri = nmin[rng[0].second];
	int rj = nmax[rng[0].second];
	int tot = rng[0].first;

	vector<bool> filled(n+1);

	for (int i = ri; i <= rj; i++)
	{
	    filled[i] = true;
	}

	for (auto i : rng)
	{
	    if (!filled[nmin[i.second]] && !filled[nmax[i.second]])
	    {
		tot += i.first;
		for (int j = nmin[i.second]; j <= nmax[i.second]; j++)
		{
		    filled[j] = true;
		}
	    }
	    else {	
	    int w = 0;
	    cout << i.second << "\n";
	    while(filled[tnmin[i.second][w]])
	    {
		w++;
	    }
	    int r = tnmax[i.second].size()-1;
	    while(filled[tnmax[i.second][r]])
	    {
		r--;
	    }
	    cout << w << " " << r << "\n";
	    w = tnmin[i.second][w];
	    r = tnmax[i.second][r];
	    if (r - w >= 0 && )
	    {
		tot += r-w+1;
	    }
	    }
	}

	cout << tot << "\n";

    }

    return 0;
}

