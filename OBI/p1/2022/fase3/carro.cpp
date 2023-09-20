#include <bits/stdc++.h>

using namespace std;

vector<array<int, 2>> pa;

int pai[100010], peso[100010];

int find (int x)
{
    if (pai[x] == x) return x;
    return pai[x] = find(pai[x]);

}

void join(int x, int y)
{
    x = find(x);
    y = find(y);

    if (x==y) return;

    if (peso[x] < peso[y]) pai[x] = y;
    if (peso[x] > peso[y]) pai[y] = x;

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

    int x, y, n, a;

    cin >> x >> y >> n >> a;


    for (int i = 0; i < n; i++)
    {
	int q, w;
	cin >> q >> w;
	pa.push_back({q, w});
    }




    return 0;
}

