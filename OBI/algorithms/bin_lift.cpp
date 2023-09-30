#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e5+10;
const int maxl = 31;

int prox[maxl][maxn];

int n, q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> q;

    for (int x = 1; x <= n; x++) cin >> prox[0][x];

    for (int i = 1; i <= maxl; i++)
    {
	for (int x = 1; x <= n; x++)
	{
	    prox[i][x] = prox[i-1][prox[i-1][x]];
	}
    }

    while(q--)
    {
	int x, k;

	cin >> x >> k;

	for (int i = 0; i <= maxl; i++)
	{
	    if (k & (1<<i)) x = prox[i][x];
	}
	cout << x << "\n";
    }

    return 0;
}

