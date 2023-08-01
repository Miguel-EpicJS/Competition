#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    int holding_days[2000][2000];

    memset(holding_days, 0, sizeof(holding_days));

    vector<int> medals[n], emp;

    int tot[2000];

    for (int i = 0; i < m; i++)
    {
	int x, y;
	cin >> x >> y;

	for (auto i : medals[y])
	{
	    medals[x].push_back(i);
	}
	medals[y] = emp;
	medals[x].push_back(i);
	for (auto i : medals[x])
	{
	    holding_days[x][i]++;
	}
    }

    
    return 0;
}

