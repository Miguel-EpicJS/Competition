#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    vector<pair<int, int>> g[n+10];

    for (int i = 0; i < m; i++)
    {
	int a, b, w;
	cin >> a >> b >> w;

	g[a].emplace_back(w, b);
	g[b].emplace_back(w, a);
    }

    return 0;
}

