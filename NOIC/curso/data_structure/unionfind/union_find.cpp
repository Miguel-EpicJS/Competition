#include <bits/stdc++.h>

using namespace std;

int pai[100001], peso[100001], qtd[100001];

int find(int x)
{
    if (pai[x] == x) return x;

    return pai[x] = find(x);
}

void join(int x, int y)
{
    x = find(x);
    y = find(y);
    
    if (x == y) return;

    if (peso[x] < peso[y]) pai[x] = y, qtd[y] += qtd[x];
    if (peso[x] > peso[y]) pai[y] = x, qtd[x] += qtd[y];

    if (peso[x] == peso[y])
    {
	pai[x] = y;
	peso[y]++;
	qtd[y]+=qtd[x];
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    return 0;
}

