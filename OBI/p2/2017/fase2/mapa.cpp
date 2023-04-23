#include <bits/stdc++.h>

using namespace std;

char mapa[110][110];

int fl, fc;

void dfs(int i, int j)
{
    if (mapa[i][j] == '.')
	return;

    fl = i;
    fc = j;
    mapa[i][j] = '.';

    dfs(i+1, j);
    dfs(i-1, j);
    dfs(i, j+1);
    dfs(i, j-1);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int l, c;

    cin >> l >> c;

    int sl, sc;

    for (int i = 0; i < 110; i++)
	for (int j = 0; j < 110; j++)
	    mapa[i][j] = '.';

    for (int i = 1; i <= l; i++)
    {
	for (int j = 1; j <= c; j++)
	{
	    cin >> mapa[i][j];
	    if (mapa[i][j] == 'o')
	    {
		sl = i;
		sc = j;
	    }
	}
    }

    dfs(sl, sc);

    cout << fl << " " << fc << "\n"; 

    return 0;
}

