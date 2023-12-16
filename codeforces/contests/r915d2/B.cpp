#include <bits/stdc++.h>

using namespace std;

// DIAMETER https://noic.com.br/materiais-informatica/ideias/ideia-03/
//

long long md, v, l = 0;
bool vis[100010];
void dfs(vector<vector<long long>> &arr, long long src, long long up)
{
    if (vis[src]) return;
    v = src; 
    vis[src] = true;


    if (arr[src].size() == 1) l++;

    for (auto i : arr[src])
    {
	if (i != src)
	    dfs(arr, i, src);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while(t--)
    {
	memset(vis, 0, sizeof(vis));
	long long a, b, n;

	cin >> n;

	vector<vector<long long>> arr(n+1);

	for (int i = 0; i < n-1; i++)
	{
	    long long x, y;
	    cin >> x >> y;
	    arr[x].push_back(y);
	    arr[y].push_back(x);
	}


	dfs(arr, 1, 0);

	l = 0;

	memset(vis, 0, sizeof(vis));
	dfs(arr, v, 0);

	long long ans = 0;

	while(l > 0) l-=2, ans++;

	cout << ans << "\n";

    }

    return 0;
}

