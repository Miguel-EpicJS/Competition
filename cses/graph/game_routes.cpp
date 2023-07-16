#include <bits/stdc++.h>

using namespace std;

int n, m;

vector<int> edge[100010], back[100010];
int in[100010], dp[100010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    memset(in, 0, sizeof(in));
    memset(dp, 0, sizeof(dp));

    dp[1] = 1;

    for (int i = 0; i < m; i++)
    {
	int x, y;
	cin >> x >> y;

	edge[x].push_back(y);
	back[y].push_back(x);

	in[y]++;
    }

    queue<int> q;

    for (int i = 0; i <= n; i++)
    {
	if (in[i] == 0) q.push(i);
    }

    while(!q.empty())
    {
	int node = q.front();
	q.pop();
	for (int next:edge[node])
	{
	    in[next]--;
	    if (in[next] == 0) q.push(next);
	}

	for (int prev : back[node])
	{
	    dp[node] = (dp[node] + dp[prev]) % 1000000007;
	}
    }

    cout << dp[n] << "\n";

        

    return 0;
}

