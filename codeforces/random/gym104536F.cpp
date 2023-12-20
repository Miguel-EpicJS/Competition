#include <bits/stdc++.h>

using namespace std;

vector<int> g1[100010], g2[100010];

int n1, s1, n2, s2;

void dfs1(int src, int ft, int d)
{
    if (src == ft) return;
    n1 = src;
    s1 = max(s1, d+1);
    for (auto i : g1[src])
    {
	dfs1(i, src, d+1);
    }
}


void dfs2(int src, int ft, int d)
{
    if (src == ft) return;
    n2 = src;
    s2 = max(s2, d+1);
    for (auto i : g2[src])
    {
	dfs2(i, src, d+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    n1 = s1 = n2 = s2 = 0;

    cin >> n;

    for (int i = 1; i < n; i++)
    {
	int x, y;
	cin >> x >> y;

	g1[x].push_back(y);
	g1[y].push_back(x);
    }

    int m;

    cin >> m;

    for (int i = 1; i < m; i++)
    {
	int x, y;
	cin >> x >> y;

	g2[x].push_back(y);
	g2[y].push_back(x);
    }

    dfs1(1, 0, 0);
    dfs1(n1, 0, 0);

    dfs2(1, 0, 0);
    dfs2(n2, 0, 0);

    cout << floor(s1/2.0) + floor(s2/2.0) + 1 << "\n";
    

    return 0;
}

