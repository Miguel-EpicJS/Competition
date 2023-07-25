#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

vector<pair<long long, int>> graph[100010];

long long dist[100010];
long long num[100010];
long long minf[100010];
long long maxf[100010];
bool vis[100010];



void dijkstra(int s)
{
    priority_queue<pair<long long, int>> q;
    q.push({0, s});
    
    dist[s] = 0;
    num[s] = 1;

    while(!q.empty())
    {
	int vert = q.top().second;
	q.pop();

	if (vis[vert]) continue;
	vis[vert] = true;

	for (auto [cost, next] : graph[vert])
	{
	    long long alt = cost + dist[vert];
	    if (alt == dist[next])
	    {
		num[next] = (num[next] + num[vert]) % mod;
		minf[next] = min(minf[next], minf[vert] + 1); 
		maxf[next] = max(maxf[next], maxf[vert] + 1); 
	    }
	    else if (alt < dist[next])
	    {
		num[next] = num[vert];
		minf[next] = minf[vert] + 1; 
		maxf[next] = maxf[vert] + 1; 
		q.push({-alt, next});
		dist[next] = alt;
	    }
	}
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
	int x, y, z;
	cin >> x >> y >> z;

	graph[x].push_back({z, y});
    }

    memset(dist+1, 0x3f, n*sizeof(long long));
    dijkstra(1);

    cout << dist[n] << " " << num[n] << " " << minf[n] << " " << maxf[n];

    return 0;
}

