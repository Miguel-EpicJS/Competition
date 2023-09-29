#include <bits/stdc++.h>

using namespace std;

vector<int> g[100010];

bool block1[2][100010];

int s, s2;

pair<int, int> dfs(int src, int p, int id)
{
    int mS = 0;
    for (auto i : g[src])
    {
	if (i == p || block1[id][i]) continue;
   
	auto k = dfs(i, src, id);

	mS = max(k.first+1, mS);
	block1[id][k.second] = 1;
    }

    return {mS, src};
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t = 0;

    cin >> n;

    s = 0;
    s2 = 0;

    for (int i = 1; i <= n; i++)
    {
	int x;
	cin >> x;
	t+=x;
	if (x == 1) s2 = s, s = i;
	block1[0][i] = x;
	block1[0][i] = x;
    }

    // solving for 1
    
    for (int i = 0; i < n-1; i++)
    {
	int x, y;

	cin >> x >> y;

	g[x].push_back(y);
	g[y].push_back(x);
    }

    if (t == 1)
    {
	cout << dfs(s, 0, 0).first << "\n";
    }
    else
    {
	
	int a = dfs(s, 0, 0).first + dfs(s2, 0, 0).first;
	int b = dfs(s2, 0, 1).first + dfs(s, 0, 1).first;

	cout << a << "\n";
	cout << b << "\n";
    }
    return 0;
}

