#include <bits/stdc++.h>

#define int long long

using namespace std;

int arr[100010], seg[400040];

void build(int node, int l, int r)
{
    if (l == r)
    {
	seg[node] = arr[l];
    }
    else
    {
	int mid = (l+r)/2;

	build(node*2+1, l, mid);
	build(node*2+2, mid+1, r);
	seg[node] = seg[node*2+1] + seg[node*2+2];
    }
}

void updt(int node, int tl, int tr, int i, int val)
{
    if (tr == tl)
    {
	seg[node] = val;
    }
    else
    {
	int mid = (tl+tr)/2;
	
	if ( tl <= i && i <= mid) updt(node*2+1, tl, mid, i, val);
	else updt(node*2+2, mid+1, tr, i, val);

	seg[node] = seg[node*2+1] + seg[node*2+2];
    }
}

int query(int node, int tl, int tr, int l, int r)
{
    if (r < tl || l > tr) return 0;
    if (l <= tl && r >= tr) return seg[node];
    
    int mid = (tl+tr)/2;

    return query(node*2+1, tl, mid, l, r) + query(node*2+2, mid+1, tr, l, r);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;

    cin >> n >> q;

    for (int i = 1; i <= n; i++) cin >> arr[i];

    build(1, 1, n);

    for (int i = 0; i < q; i++)
    {
	int x, y, z;
	cin >> x >> y >> z;
	if (x == 0)
	{
	    cout << query(1, 1, n, y, z) << "\n";
	}
	else
	{
	    updt(1, 1, n, y, z);
	}
    }

    return 0;
}

