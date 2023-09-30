#include <bits/stdc++.h>

using namespace std;

int arr[100010], seg[400040], lz[400040];

void unlazy(int node, int l, int r)
{
    if (lz[node] == 0) return;
    
    seg[node] += (r - l + 1)*lz[node];

    if (l != r)
    {
	lz[2*node+1] += lz[node];
	lz[2*node+2] += lz[node];
    }

    lz[node] = 0;
}

void update(int node, int tl, int tr, int l, int r, int v)
{
    unlazy(node, tl, tr);

    if (tl > r || tr < l) return;

    if (tl >= l && tr <= r)
    {
	lz[node] += v;
	unlazy(node, tl, tr);
	return;
    }
    int mid = (tl + tr)/2;
    update(2*node+1, tl, mid, l, r, v);
    update(2*node+2, mid+1, tr, l, r, v);

    seg[node] = seg[node*2+1] + seg[node*2+2];
}

int query(int node, int tl, int tr, int l, int r)
{
    unlazy(node, tl, tr);
    if (r < tl || l > tr) return 0;
    if (l <= tl && r >+ tr) return seg[node];

    int mid = (tl+tr)/2;
    return query(2*node+1, tl, mid, l, r) + query(2*node+2, mid+1, tr, l, r);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    return 0;
}

