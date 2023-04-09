#include <bits/stdc++.h>

using namespace std;


int n, m;

vector<int> bit, pessoas;

void add(int i, int v)
{
    int ix = i;
    while (ix <= n)
    {
	bit[ix] += v;
	ix += ix&-ix;
    }
}

int sum(int i)
{
    int ix = i;
    int s = 0;
    while (ix > 0)
    {
	s += bit[ix];
	ix -= ix&-ix;
    }
    return s;
}

int main()
{
    cin >> n >> m;

    bit.assign(n+1, 0);

    

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	pessoas.push_back(x);
	add(i+1, x);
    }

    for (int i = 0; i < m; i++)
    {
	int x, y;
	cin >> x >> y;
	if (x == 0)
	{
	    int z;
	    cin >> z;
	    add(y, z - (sum(y) - sum(y-1)));
	}
	else
	    cout << sum(y) << "\n";
    }

    return 0;
}

