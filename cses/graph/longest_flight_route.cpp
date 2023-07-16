#include <bits/stdc++.h>

using namespace std;

int n, m;

int previous[100010];
int dist[100010];
int in_degree[100010];
vector<int> edge[100010];
vector<int> back[100010];

void compute()
{
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
	if (in_degree[i] == 0) q.push(i);
    }

    while(!q.empty())
    {
	int node = q.front();
	q.pop();

	for (int next : edge[node])
	{
	    in_degree[next]--;
	    if (in_degree[next] == 0) q.push(next);
	}

	int mx = -999999999;
	int mx_node = -1;
	for (int prv : back[node])
	{
	    if (dist[prv] + 1 > mx)
	    {
		mx = dist[prv] + 1;
		mx_node = prv;
	    }
	}

	dist[node] = mx;
	if (node == 0) dist[node] = 1;
	previous[node] = mx_node;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
	previous[i] = -1;
	dist[i] = -999999999;
	in_degree[i] = 0;
    }

    for (int i = 0; i < m; i++)
    {
	int a, b;
	cin >> a >> b;
	a--, b--;
	in_degree[b]++;
	edge[a].push_back(b);

	back[b].push_back(a);
    }

    compute();

    stack<int> ans;
    int temp = n-1;
    bool con = false;
    if(temp == 0) con = true;

    while(temp != -1 && dist[temp] >= 0)
    {
	ans.push(temp);
	temp = previous[temp];
	if (temp == 0 ) con = true;
    }

    if (con)
    {
	cout << dist[n-1] << "\n";
	while(!ans.empty())
	{
	    cout << ans.top() + 1 << " ";
	    ans.pop();
	}
    }
    else
    {
	cout << "IMPOSSIBLE\n";
    }

    return 0;
}

