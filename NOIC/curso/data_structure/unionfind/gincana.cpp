#include <bits/stdc++.h>

using namespace std;

int pai[1001], pesos[1001];

int find(int x)
{
    if (pai[x] == x) return x;

    return pai[x] = find(pai[x]);
}

void join(int x, int y)
{
    pai[find(x)] = find(y);
}

int main()
{    
    int n, m;

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
	pai[i] = i;
    }

    int x, y;
    for (int i = 0; i < m; i++)
    {
	cin >> x >> y;

	join(x, y);
    }

    int resp = 0;

    for(int i=1; i<=n; i++) if(find(i)==i) resp++;


    cout << resp << "\n";


    return 0;
}

