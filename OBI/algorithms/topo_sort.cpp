#include <bits/stdc++.h>

using namespace std;

int n, m;

vector<int> g[100000];

int grau[100000];
vector<int> lista;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
	int x, y;
	cin >> x >> y;
	g[x].push_back(y);
	grau[y]++;
    }

    for (int i = 1; i <= n; i++) if (grau[i] == 0) lista.push_back(i);

    int ini = 0;

    while (ini < lista.size())
    {
	int atual = lista[ini];
	ini++;

	for (int i = 0; i < g[atual].size(); i++)
	{
	    int v = g[atual][i];
	    grau[v]--;
	    if (grau[v] == 0) lista.push_back(v);
	}
    }

    if (lista.size() < n) cout << "impo\n";
    else 
    {
	for (auto i : lista) cout << i << " ";
    }

    return 0;
}

