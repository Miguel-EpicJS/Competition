#include <bits/stdc++.h>

using namespace std;

int arr[1000], tree[2001];

void build(int idx, int start, int end)
{
    if (start == end)
    {
	tree[idx] = arr[end];
    }
    else
    {
	int mid = (start+end)/2;
	build(2*idx, start, mid);
	build(2*idx+1, mid+1, end);

	tree[idx] = tree[idx*2] + tree[idx*2+1];
    }
}

int query(int idx, int start, int end, int l, int r)
{
    if (l > end || r < start)
    {
	return 0;
    }
    else if (l >= start && r <= end)
    {
	return tree[idx];
    }
    else
    {
	int mid = (start+end)/2;
	int q1 = query(idx*2, start, mid, l, r);
	int q2 = query(idx*2+1, mid+1, end, l, r);
	
	return q1 + q2;
    }
}

void updt(int idx, int start, int end, int i, int val)
{
    if (start == end) tree[idx] = val;
    else
    {
	int mid = (start + end) / 2;
	if (i <= mid)
	{
	    updt(idx*2, start, mid, i, val);
	}
	else
	{
	    updt(idx*2+1, mid+1, end, i, val);
	}
	tree[idx] = tree[idx*2] + tree[idx*2+1];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
    }

    build(1, 0, n-1);

    cout << query(1, 0, n-1, 3, 6);

    return 0;
}

