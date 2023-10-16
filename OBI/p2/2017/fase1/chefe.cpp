#include <bits/stdc++.h>

using namespace std;

vector<int> graph[510];
vector<int> ages(510), tre(510);

int n, m, i;

int dfs(int src)
{
    int node = ages[src];

    for (auto i : graph[src])
    {
	node = min(node, dfs(tre[i]));
    }

    return node;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> m >> i;

    for (int j = 1; j <= n; j++)
    {
	cin >> ages[j];
	tre[j] = j;
    }

    for (int j = 0; j < m; j++)
    {
	int x, y;
	cin >> x >> y;
	graph[y].push_back(x);
    }

    for (int j = 0; j < i; j++)
    {
	char x;

	cin >> x;

	if (x == 'P')
	{
	    int y;
	    cin >> y;
	    if (graph[tre[y]].size() == 0) cout << "*\n";
	    else cout << dfs(tre[y]) << "\n";
	}
	else
	{
	    int y, z;
	    cin >> y >> z;
	    int t = ages[y];
	    ages[y] = ages[z];
	    ages[z] = t;
	    t = tre[y];
	    tre[y] = tre[z];
	    tre[z] = t;



	}
    }


    return 0;
}

