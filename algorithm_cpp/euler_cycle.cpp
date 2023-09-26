#include <bits/stdc++.h>

using namespace std;

#define maxn 10000

vector<int> CicloEuleriano, edges_out[maxn];

void findD(int u)
{
    while(edges_out[u].size() != 0)
    {
	int v = edges_out[u].back();

	edges_out[u].pop_back();

	findD(v);
    }

    CicloEuleriano.push_back(u);
}
void AcharCicloEuler(int u, int id_anterior) {
    while(edges_id[u].size() != 0) {
        // Pega od id de alguma aresta de u que não foi usada e vê se já foi visitada
        int id = edges_id[u].back();
        if(vis[id] == 1) {
            edges_id[u].pop_back();
            continue;
        }

        // Encontra a outra ponta da aresta
        int v = edges[id].first+edges[id].second-u;
        // Podemos fazer isso porque estamos somando as u+v e subtraindo u, sobrando apenas v

        // Apaga aresta do grafo, marcando como visitada e tirando da lista de adjacencia de u
        vis[id] = 1;
        edges_id[u].pop_back();

        // Tenta fazer um Caminho Euleriano partindo de v
        AcharCicloEuler(v,id);
    }
    // Adiciona u na resposta
    CicloEulerianoVertice.push_back(u);
    // Se você quiser guardar o id das arestas ao invés dos vértices:
    CicloEulerianoAresta.push_back(id_anterior);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);




    return 0;
}

