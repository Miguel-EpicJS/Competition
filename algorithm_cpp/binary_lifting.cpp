#include <bits/stdc++.h>

using namespace std;

int prox[32][100010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;

    cin >> n >> q;

    for (int x = 1; x <= n; x++)
    {
	cin >> prox[0][x];
    }

    for (int i = 1; i <= 30; i++)
    {
	for (int x = 1;x <= n; x++)
	{
	    prox[i][x] = prox[i-1][prox[i-1][x]];
	}
    }

    while(q--)
    {
	int x, k;

	cin >> x >> k;

	for(int i = 0; i <= 30; i++)
	{
	    if (k & (1<<i)) x = prox[i][x];
	}

	cout << x << "\n";
    }

    return 0;
}

