#include <bits/stdc++.h>

using namespace std;

char arr[505][505];

int n, m;
void dfs(int x, int y)
{

    if (arr[x][y] == '*')
    {
	return;
    }

    if (arr[x][y] - '0' > m)
    {
	return;
    }

    arr[x][y] = '*';

    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x, y+1);
    dfs(x, y-1);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> m;

    for (int i = 0; i < 505; i++)
    {
	for (int j = 0;j < 505; j++)
	{
	    arr[i][j] = '*';
	}
    }

    for (int i = 0; i < n; i++)
    {
	for (int j = 0; j < n; j++)
	{
	    cin >> arr[i+2][j+2];
	}
    }


    dfs(2, 2);


    for (int i = 0; i < n; i++)
    {
	for (int j = 0; j < n; j++)
	{
	    cout << arr[i+2][j+2];
	}
	cout << "\n";
    }

    return 0;
}

