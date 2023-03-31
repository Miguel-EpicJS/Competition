#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, p;

    cin >> n >> m >> p;

    int vis[n+10];

    memset(vis, 0, sizeof(vis));

    int tot = 0;

    for (int i = 0; i < m; i++)
    {
	int x, y;
	cin >> x >> y;

	if (vis[x] < p && vis[y] < p)
	{
	    tot++;
	}
    }

    cout << tot << "\n";

    return 0;
}

