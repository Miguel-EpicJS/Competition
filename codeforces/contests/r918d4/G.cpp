#include <bits/stdc++.h>

using namespace std;

vector<int> slow;

const int INF = 1000000000;

vector<vector<pair<int, int>>> adj(1010);

void dijkstra(int s, vector<vector<int>> & d, int fct, int &ans, int ss) {
    int n = 1010;
    d.assign(n, vector<int>(n, INF));
    ans = INF;
    d[fct][s] = 0;
    using pii = array<int, 3>;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s, fct});
    

    while (!q.empty()) {
        int v = q.top()[1];
        int d_v = q.top()[0];
	int fc = q.top()[2];
       
	
	if (v == ss) ans = min(ans, d[fc][v]);

	q.pop();

        if (d_v != d[fc][v])
            continue;


        for (auto edge : adj[v]) {
	    int fa = fc;
            int to = edge.first;
            int len = edge.second*fa;

            if (d[fa][v] + len < d[fa][to]) {
                d[fa][to] = d[fa][v] + len;
                q.push({d[fa][to], to, fa});
            }
	    
	    len = edge.second*slow[v];
	    fa = slow[v];

            if (d[fa][v] + len < d[fa][to]) {
                d[fa][to] = d[fa][v] + len;
                q.push({d[fa][to], to, fa});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while(t--)
    {
	vector<vector<int>> d;
	slow.clear();
	adj.clear();

	int n, m;

	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
	    
	    int x, y, z;
	    cin >> x >> y >> z;

	    adj[x].push_back({y,z});
	    adj[y].push_back({x,z});

	}

	for (int i = 0; i < n; i++)
	{
	    int x;
	    cin >> x;
	    slow.push_back(x);
	}

	int a = 0;
	dijkstra(1, d, slow[0], a, n);

	cout << a << "\n"; 

    }

    return 0;
}

