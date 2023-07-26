#include <bits/stdc++.h>

using namespace std;

int tree[1000000];
int a[200010];

void build(int node, int start, int end)
{
    if (start == end)
    {
	tree[node] = a[start];
    }
    else
    {
	int mid = (start + end) /2 ;
	build(2*node+1, start, mid);
	build(2*node+2, mid+1, end);
	tree[node] = min(tree[2*node+1], tree[2*node+2]);
    }
}

int query(int node, int start, int end, int l, int r)
{
    if (l > end || start > r) return INT_MAX;
    if (l <= start && r >= end) return tree[node];
    int q1, q2;
    int mid = (start+end) / 2;
    q1 = query(2*node+1, start, mid, l, r);
    q2 = query(2*node+2, mid+1, end, l, r);
    return min (q1, q2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
	cin >> a[i];
    }

    build(0, 0, n-1);

    for (int i = 0; i < m; i++)
    {
	int x, y;
	cin >> x >> y;
	x--, y--;
	cout << query(0, 0, n-1, x, y) << "\n"; 
    }

    return 0;
}

