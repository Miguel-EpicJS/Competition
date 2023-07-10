#include <bits/stdc++.h>

using namespace std;

char arr[1010][1010], px[1010][1010], py[1010][1010];

char parent[1010][1010];

int n, m, sx, sy, ex, ey;

vector<int> dirx = {1,-1,0,0}, diry = {0,0,1,-1};
vector<char> dir = {'D', 'U', 'R', 'L'};

int ans = 0;
stack<char> path;

bool bfs()
{
    queue<pair<int, int>> q;
    arr[sx][sy] = '#';
    q.push({sx, sy});
    parent[sx][sy] = '*';
    while (!q.empty())
    {
	pair<int, int> node = q.front();
	int x = node.first;
	int y = node.second;
	q.pop();

	if(x == ex && y == ey) return true;

	for (int i = 0; i < 4; i++)
	{
	    if (x+dirx[i] < 0 || x+dirx[i] >= n || y+diry[i] < 0 || y+diry[i] >= m)
	    {
		continue;
	    }
	    if (arr[x+dirx[i]][y+diry[i]] == '#') continue;
	    arr[x+dirx[i]][y+diry[i]] = '#';
	    parent[x+dirx[i]][y+diry[i]] = dir[i];
	    py[x+dirx[i]][y+diry[i]] = -diry[i];
	    px[x+dirx[i]][y+diry[i]] = -dirx[i];
	    q.push({x+dirx[i], y+diry[i]});
	}

    }
    return false;
}

void getPath(int x, int y)
{
    while(parent[x][y] != '*')
    {
	path.push(parent[x][y]);
	int tmpx = x+px[x][y];
	int tmpy = y+py[x][y];
	x = tmpx;
	y = tmpy;
	ans++;
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
	for (int j = 0; j < m; j++)
	{
	    cin >> arr[i][j];
	    if (arr[i][j] == 'A') sx = i, sy = j;
	    else if (arr[i][j] == 'B') ex = i, ey = j;
	}
    }

    if (bfs())
    {
	cout << "YES\n";
	getPath(ex, ey);
	cout << ans << "\n";
	while(!path.empty())
	{
	    cout << path.top();
	    path.pop();
	}
    }
    else
    {
	cout << "NO\n";
    }

    return 0;
}

