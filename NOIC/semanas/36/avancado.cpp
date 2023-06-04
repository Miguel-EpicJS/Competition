#include <bits/stdc++.h>
using namespace std;

long long power(long long x, long long n, long long m)
{
    if (n == 0) return 1;
    
    long long result = 1;
    
    while (n > 0) {
        if (n % 2 != 0) {
            result = (result * x) % m;
        }
        
        x = (x * x) % m;
        n /= 2;
    }
    
    return result;
}

struct s_aresta {
    long long dis;
    long long x, y;
};	

bool comp(s_aresta a, s_aresta b) { return a.dis > b.dis;};

long long pai[510];
long long peso[510];

vector<s_aresta> arestas;

long long find(int x)
{
    if (pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

void join(long long a, long long b)
{
    a = find(a);
    b = find(b);

    if (peso[a] < peso[b]) pai[a] = b;
    else if (peso[b] < peso[a]) pai[b] = a;
    else {
	pai[a] =b;
	peso[b] ++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, m;

    cin >> n >> m;

    vector<long long> a(n);

    for (long long i = 0; i < n; i++)
    {
	cin >> a[i];
	pai[i] = i;
    }

    for (long long i = 0; i < n; i++)
    {
	for (long long j = i; j < n; j++)
	{
	    if (i == j) continue;
	    long long v = (power(a[i], a[j], m) + power(a[j], a[i], m)) % m;
	    arestas.push_back({v, i, j});
	}
    }
    
    sort(arestas.begin(), arestas.end(), comp);
    
    long long siz = 0;
    for (int i = 0; i < arestas.size(); i++)
    {
	if (find(arestas[i].x) != find(arestas[i].y))
	{
	    join(arestas[i].x, arestas[i].y);
	    siz += arestas[i].dis;
	}
    }

    cout << siz;

    return 0;
}

