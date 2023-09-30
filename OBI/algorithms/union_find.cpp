#include <bits/stdc++.h>

using namespace std;

int pai[100000], w[100000];

int find(int x)
{
    if (x == pai[x]) return x;

    return pai[x] = find(pai[x]);
}

void join(int x, int y)
{
    x = find(x);
    y = find(y);

    if (x == y) return;

    if (w[x] < w[y]) pai[x] = y;
    else if (w[x] > w[y]) pai[y] = x;
    else {
	pai[x] = y;
	w[y]++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(pai, 0, sizeof(pai));
    memset(w, 0, sizeof(w));


    return 0;
}

