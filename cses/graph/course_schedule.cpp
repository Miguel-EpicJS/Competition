#include <bits/stdc++.h>

using namespace std;

int n, m;

vector<int> graph[100010];

stack<int> topS;

int colors[100010];

bool dfs(int u)
{
    colors[u] = 1;
    for(auto i : graph[u])
    {
	if (colors[i] == 1)
	{
	    return true;
	}
	else if(colors[i] == 0)
	{
	    if (dfs(i)) return true;
	}
    }
    colors[u] = 2;
    topS.push(u);
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
	int x, y;
	cin >> x >> y;
	graph[x].push_back(y);
    }

    memset(colors, 0, sizeof(colors));


    for (int i = 1; i <= n; i++)
    {
	if (colors[i] == 0)
	{
	    if (dfs(i))
	    {
		cout << "IMPOSSIBLE\n";
		return 0;
	    }
	}
    }

    while(!topS.empty())
    {
	cout << topS.top() << " ";
	topS.pop();
    }

    return 0;
}

