#include <bits/stdc++.h>

using namespace std;

int n, q;
char l[100005];

string r = "";

vector<int> g[100005];
bool vis[100005];
int dis[100005];

void init()
{
    for (int i = 0; i < 100005; i++)
    {
	vis[i] = false;
    }
}

void mark(int start, int count)
{
    vis[start] = true;
    dis[start] = count;
    for (auto e : g[start])
    {
	if (vis[e])
	{
	    continue;
	}
	mark(e, count+1);
    }
}

void dfs(int start, int fstart)
{
    if (start != fstart && dis[start] <= dis[fstart])
    {
	return;
    }
    r += l[start-1];
    vis[start] = true;
    for (auto e : g[start])
    {
	if (vis[e])
	{
	    continue;
	}
	dfs(e, fstart);
    }
}

int main()
{
    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
	cin >> l[i];
    }

    for (int i = 0; i < n-1; i++)
    {
	int x, y;
	cin >> x >> y;
	
	g[x].push_back(y);
	g[y].push_back(x);
    }
    init();
    mark(1, 0);
    while (q--)
    {
	init();
	int x;
	string y;
	cin >> x >> y;
	int a[27] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int b[27] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	dfs(x, x);
	int t = 0;
	for (int i = 0; i < y.length(); i++)
	{
	    a[y[i] - 'a']++;
	    t++;
	}
	for (int i = 0; i < r.length(); i++)
	{
	    if (a[r[i] - 'a'] == 0 || a[r[i] - 'a'] == b[r[i] - 'a'])
	    {
		continue;
	    }
	    b[r[i] - 'a']++;
	    t--;
	}


	cout << t << "\n";
	r = "";
    }

    return 0;
}

