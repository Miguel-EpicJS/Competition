#include <bits/stdc++.h>

using namespace std;

long long mat[1010][1010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    memset(mat, 0, sizeof(mat));

    for (int i = 1; i <= n; i++)
    {
	for (int j = 1; j <= n; j++)
	{
	    char x;
	    cin >> x;

	    if (x == '*') mat[i][j] = 1;

	}
    }

    for (int i = 1; i <= n; i++)
    {
	for (int j = 1; j <= n; j++)
	{
	    mat[i][j] += mat[i][j-1];
	}
    }

    for (int i = 1; i <= n; i++)
    {
	for (int j = 1; j <= n; j++)
	{
	    mat[i][j] += mat[i-1][j];
	}
    }

    int x1, y1, x2, y2, tot;
    for (int i = 0; i < m; i++)
    {
	cin >> x1 >> y1 >> x2 >> y2;

	tot = mat[x2][y2] - mat[x1-1][y2] - mat[x2][y1-1] + mat[x1-1][y1-1];

	cout << tot << "\n";
    }

    return 0;
}

