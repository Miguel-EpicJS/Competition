#include <bits/stdc++.h>

using namespace std;

int pai[1010], peso[1010] = {0};

int find(int x)
{
    if (pai[x]==x) return x;
    return pai[x] = find(pai[x]);
}

void join(int x, int y)
{
    x = find(x);
    y = find(y);

    if (x==y) return;

    if (peso[x]>peso[y]) pai[y] = x;
    if (peso[x]<peso[y]) pai[x] = y;

    if (peso[x] == peso[y])
    {
	pai[x] = y;
	peso[y]++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    for (int i = 0; i <= n; i++)
    {
	pai[i] = i;
    }

    for (int i = 0; i < m; i++)
    {
	int x, y;
	cin >> x >> y;

	join(x, y);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
	if (find(i) == i) ans++;
    }

    
    cout << ans;

    return 0;
}

