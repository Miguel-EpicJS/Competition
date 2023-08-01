#include <bits/stdc++.h>

using namespace std;

unordered_map<int, vector<int>> graph;

int in[50001];
int out[50001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
	int x, y;
	cin >> x >> y;
	graph[x].push_back(y);
    }

    return 0;
}

