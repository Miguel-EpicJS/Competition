// Comentário Noic - OBI 2019 - Fase 3 - Nível 2
// Metrô da Nlogônia - Complexidade O(N + M)
// Escrito por Lúcio Figueiredo

#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;

int n, m;

int dist[2][maxn];

int pai[2][maxn];

vector<int> grafo[2][maxn];

void dfs(int u, int p, int q)
{
    for (auto v: grafo[q][u])
    {
        if (v == p) continue;

        dist[q][v] = dist[q][u]+1;
        pai[q][v] = u;

        dfs(v, u, q);
    }
}

pair<int, int> get_diam(int q)
{
    int t = (q == 0 ? n : m);
    dist[q][1] = 0;
    dfs(1, 0, q);
    int maior = -1, u;
    for (int i = 1; i <= t; i++)
        if (dist[q][i] > maior)
            maior = dist[q][i], u = i;
    dist[q][u] = 0;
    dfs(u, 0, q);
    maior = -1;
    int v;
    for (int i = 1; i <= t; i++)
        if (dist[q][i] > maior)
            maior = dist[q][i], v = i;

    return {u, v};
}
int find_center(int q)
{
    pair<int, int> diam = get_diam(q);

    int u = diam.first, v = diam.second;

    int at = v, qtd = 0;
    while (true)
    {
        if (qtd == dist[q][v]/2) return at;

        at = pai[q][at], qtd++;
    }
}

int main(void)
{
    scanf("%d %d", &n, &m);

    for (int i = 1; i < n; i++)
    {
        int u, v;
        scanf("%d %d", &u, &v);

        grafo[0][u].push_back(v);
        grafo[0][v].push_back(u);
    }

    for (int i = 1; i < m; i++)
    {
        int u, v;
        scanf("%d %d", &u, &v);

        grafo[1][u].push_back(v);
        grafo[1][v].push_back(u);
    }

    printf("%d %d\n", find_center(0), find_center(1));
}
