#include <bits/stdc++.h>

using namespace std;

vector<int> g[100000];

void dfs(int s, vector<bool> &visited)
{
    stack<int> stack;

    stack.push(s);
    while (!stack.empty())
    {
	s = stack.top();
	stack.pop();

	for (auto node : g[s])
	{
	    if (!visited[node])
	    {
		visited[node] = true;
		stack.push(node);
	    }
	}
    }
}

void countRemovedEdges(int N, int M, int K)
{
    int C = 0;

    vector<bool> vis(N+1, false);
    

    for (int node =1; node <= N; node++)
    {
	if (!vis[node])
	{
	    C = C+1;

	    dfs(node, vis);

	    if (C <= K)
	    {
		cout << M - N + K << "\n";
		break;
	    }
	    else
	    {
		cout << -1 << "\n";
		break;
	    }
	}
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, k;

    cin >> n >> m >> k;

    for (int i = 0; i < m; i++)
    {
	int x, y;
	cin >> x >> y;

	g[x].push_back(y);
	g[y].push_back(x);
    }


    countRemovedEdges(n, m, k);

    return 0;
}

