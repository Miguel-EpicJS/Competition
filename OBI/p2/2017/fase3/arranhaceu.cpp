#include <bits/stdc++.h>

using namespace std;

vector<int> tree;

void update(int i, int val)
{
    while (i < tree.size())
    {
	tree[i] += val;
	i += i & -i;
    }
}

int prefix_sum(int i)
{
    int res = 0;
    while (i > 0)
    {
	res += tree[i];
	i -= i & -i;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    tree.resize(n+1);

    vector<int> arr;

    for (int i = 1; i <= n; i++)
    {
	int x;
	cin >> x;
	arr.push_back(x);
	update(i, x);
    }

    while (m--)
    {
	int x, y;
	cin >> x >> y;
	if (x == 0)
	{
	    int w;
	    cin >> w;
	    int diff = w - arr[y-1];
	    arr[y-1] = w;
	    update(y, diff);
	}
	else
	{
	    cout << prefix_sum(y) << "\n";
	}
    }

    return 0;
}

