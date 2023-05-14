#include <bits/stdc++.h>

using namespace std;

char mp[510][510];
bool vis[510][510];

void bfs(int x, int y)
{
    list<pair<int, int>> s;
    s.push_back({x, y});

    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};

    vector<int> arr;

    while (!s.empty())
    {
	pair<int, int> nd = s.front();
	int px = nd.first;
	int py = nd.second;
	s.pop_front();

	if (mp[px][py] == '#') continue;
	if (vis[px][py] == true) continue;
	
	vis[px][py] = true;
	
	if (mp[px][py] == '.')
	{
	    if (mp[px-1][py] == 'o')                               mp[px][py] = 'o';
	    else if (mp[px][py-1] == 'o' && mp[px+1][py-1] == '#') mp[px][py] = 'o';
	    else if (mp[px][py+1] == 'o' && mp[px+1][py+1] == '#') mp[px][py] = 'o';
	}

	for (auto i : s)
	{
	    int kx = i.first;
	    int ky = i.second;
	    if (mp[kx][ky] == '.')
	    {
		if (mp[kx-1][ky] == 'o')                               mp[kx][ky] = 'o';
	        else if (mp[kx][ky-1] == 'o' && mp[kx+1][ky-1] == '#') mp[kx][ky] = 'o';
		else if (mp[kx][ky+1] == 'o' && mp[kx+1][ky+1] == '#') mp[kx][ky] = 'o';
	    }

	}
    
	for (int i = 0; i < 4; i++)
	{
	    s.push_back({px+dx[i], py+dy[i]});
	}
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, x, y;

    cin >> n >> m;

    for (int i = 0; i < 510; i++)
    {
	for (int j = 0; j < 510; j++)
	{
	    mp[i][j] = '.';
	    vis[i][j] = true;
	}
    }
    for (int i = 0; i < n; i++)
    {
	for (int j = 0; j < m; j++)
	{
	    cin >> mp[i+2][j+2];
	    vis[i+2][j+2] = false;
	    if (mp[i+2][j+2] == 'o')
	    {
		x = i+2;
		y = j+2;
	    }
	}
    }

    bfs(x, y);

    for (int i = 0; i < n; i++)
    {
	for (int j = 0; j < m; j++)
	{
	    cout << mp[i+2][j+2];
	}
	cout << "\n";
    }



    return 0;
}

