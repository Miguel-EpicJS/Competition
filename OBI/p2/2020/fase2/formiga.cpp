#include <bits/stdc++.h>

using namespace std;

vector<int> sizes(300);
vector<int> graph[400];

int md = 0;

void dfs(int src, int last, int depth)
{
    if (last <= sizes[src]) return;

    md = max(md, depth);

    for (auto i : graph[src])
    {
	dfs(i, sizes[src], depth+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, a;

    cin >> n >> m >> a;


    for (int i = 1; i <= n; i++)
    {
	cin >> sizes[i];
    }

    for (int i = 0; i < m; i++)
    {
	int x, y;
	cin >> x >> y;
	graph[x].push_back(y);
	graph[y].push_back(x);
    }

    dfs(a, 20000, 0);

    cout << md << "\n";

    return 0;
}

