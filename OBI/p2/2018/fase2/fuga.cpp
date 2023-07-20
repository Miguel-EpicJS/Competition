#include <bits/stdc++.h>

using namespace std;

int maxd = 0;

int n,m;
int xi, yi;
int xj, yj;

bool vis[20][20];

void dfs(int sx, int sy, int d)
{
    if (sx < 1 || sx > n || sy < 1 || sy > m) return;
    if (vis[sx][sy]) return;

    if (sx == xj && sy == yj)
    {
	maxd = max(d, maxd);
	vis[sx][sy]= false;
	return;
    }

    vis[sx][sy] = true;

    dfs(sx, sy+2, d+2);
    dfs(sx, sy-2, d+2);
    dfs(sx+2, sy, d+2);
    dfs(sx-2, sy, d+2);

    vis[sx][sy] = false;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> m;
    cin >> xi >> yi;
    cin >> xj >> yj;

    dfs(xi, yi, 1);

    cout << maxd << "\n";

    return 0;
}

