#include <bits/stdc++.h>

using namespace std;

vector<int> euler, edges_out[100000], edges_id[100000];
vector<pair<int, int>> edges;

bool vis[100000];

void findEulerCycle(int u)
{
    while(edges_out[u].size() != 0)
    {
	int v = edges_out[u].back();
	edges_out[u].pop_back();
	findEulerCycle(v);
    }

    euler.push_back(u);
}

void findEulerCycleUn(int u, int id_anterior)
{
    while(edges_id[u].size() != 0)
    {
	int id = edges_id[u].back();
	if (vis[id] == 1)
	{
	    edges_id[u].pop_back();
	    continue;
	}

	int v = edges[id].first+edges[id].second-u;

	vis[id] = 1;
	edges_id[u].pop_back();
	findEulerCycleUn(v, id);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    return 0;
}

