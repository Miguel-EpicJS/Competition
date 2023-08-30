#include <bits/stdc++.h>

using namespace std;

vector<int> g[100010];

struct Par {
    int tam, qtd;
    bool operator>(const Par& o) const { return tam > o.tam; };
    bool operator==(const Par& o) const { return tam == o.tam; };
}

int cnt[100010];

Par dfs(int u, int p)
{
    vector<Par> aq = {{0, 1}};

    for (int v : g[u]) 
	if (v != p)
	    aq.push_back(dfs(v, u));

	int ff = 0, ss = 0;
	for(int i = 0; i < (int)(aq.size()); i++)
		if(aq[i] > aq[ff]) ss = ff, ff = i;
		else if(aq[i] > aq[ss]) ss = i;
    vector<Par> aux;

    for(int i = 0; i < (int)(aq.size()); i++)
		if(aq[i] == aq[ss]) aux.push_back(aq[i]);

	// caso [1], existem vários maiores valores e queremos parear todos eles 1 a 1
	if(aq[ff] == aq[ss]) {
		int foi = 0, ans = 0;
		for(int i = 0; i < (int)(aux.size()); i++)
			ans += foi * aux[i].qtd, foi += aux[i].qtd;

		cnt[2*aq[ff].tam + 1] += ans;
		
		return {aq[ff].tam + 1, foi};
	}

	// aq[ff] > aq[ss], caso [2], existe somente 1 maior porém podem existir vários segundos maiores (ou somente 1)
	int ans = 0;
	for(int i = 0; i < (int)(aux.size()); i++)
		ans += aq[ff].qtd * aux[i].qtd;

	cnt[aq[ff].tam + aq[ss].tam + 1] += ans;

	return {aq[ff].tam + 1, aq[ff].qtd};
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    for (int i = 1; i < n; i++)
    {
	int x, y;
	cin >> x >> y;
	g[x].push_back(y);
	g[y].push_back(x);
    }



    return 0;
}

