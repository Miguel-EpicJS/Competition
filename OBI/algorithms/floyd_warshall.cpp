#include <bits/stdc++.h>

using namespace std;

int w[100000][100000];
int d[100000][100000];
int n;

void floyd_warshall()
{
    for (int i = 1; i <= n; i++)
	for (int j = 1; j <+ n; j++)
	    d[i][j] = w[i][j];

    for (int k = 1; k <= n; k++)
	for (int i = 1; i <= n; i++)
	    for (int j = 1; j <= n; j++)
		d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    return 0;
}

