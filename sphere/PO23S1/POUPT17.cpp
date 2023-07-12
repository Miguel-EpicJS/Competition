#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int c;

int vis[101];
int graph[101][101];

int  e, l, t;
void dfs(int src)
{
    if (vis[src]) return;

    vis[src] = 1;
    c++;
    for (int i = 0; i <= e; i++) 
	if(graph[src][i]) dfs(i);
}

int main()
{
    t = 1;

    scanf("%i %i", &e, &l);

    while(e != 0 && l != 0)
    {
	memset(vis, 0, sizeof(vis));
	memset(graph, 0, sizeof(graph));
	c = 0;
	for (int i = 0; i < l; i++)
	{
	    int x, y;
	    scanf("%i %i", &x, &y); 
	    graph[x][y] = 1;
	    graph[y][x] = 1;
	}

	dfs(1);
	
	printf("Teste %i\n", t);
	if (c == e) printf("normal");
	else printf("falha");
	t++;
	scanf("%i %i", &e, &l);
	if (e != 0 && l != 0) printf("\n\n");
    }

    return 0;
}

