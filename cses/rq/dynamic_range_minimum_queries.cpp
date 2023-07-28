#include <bits/stdc++.h>

using namespace std;

int a[100000];
int tree[500000];

int n, m;

void sset(int ind, int val)
{
    ind += n;

    tree[ind] = val;
    for (; ind > 1; ind /= 2)
    {
	tree[ind/2] = min(tree[ind], tree[ind^1]);
    }
}

int range(int start, int end)
{
    int sum = 1e9+1;
    for (start += n, end += n; start < end; start /= 2, end /= 2)
    {
	if (start % 2 == 1) sum = min(sum, tree[start++]);
	if (end % 2 == 1) sum = min(sum, tree[--end]);
    }
    return sum;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	sset(i, x);
    }

    for (int i = 0; i < m; i++)
    {
	int x, y, z;
	cin >> x >> y >> z;

	if (x == 1)
	{
	    sset(y-1, z);
	}
	else
	{
	    cout << range(y-1, z) << "\n";
	}
    }

    return 0;
}

