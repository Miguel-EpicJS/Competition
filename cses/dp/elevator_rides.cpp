#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, k;

    cin >> n >> k;

    int weight[21];

    for (int i = 0; i < n; i++)
    {
	cin >> weight[i];
    }

    pair<int, int> best[1<<n];

    best[0] = {1, 0};

    for (int s = 1; s < (1<<n); s++)
    {
	best[s] = {n+1, 0};
	for (int p = 0; p < n; p++)
	{
	    if (s & (1<<p))
	    {
		auto option = best[s^(1<<p)];
		if (option.second + weight[p] <= k)
		{
		    option.second += weight[p];
		}
		else
		{
		    option.first++;
		    option.second = weight[p];
		}
		best[s] = min(best[s], option);
	    }
	}
    }

    cout << best[(1<<n) -1].first<< "\n";

    return 0;
}

