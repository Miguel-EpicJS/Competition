#include <bits/stdc++.h>

using namespace std;

struct node
{
    int mini, maxi, diff;
};

node arr[100000];
node tree[400000];

void build(int src, int start, int end)
{
    if (start == end)
    {
	tree[src] = arr[start];
    }
    else
    {
	int mid = (start + end) / 2;
	build(2*src, start, mid);
	build(2*src+1, mid+1, end);

	if (tree[2*src].diff == -1 || tree[2*src+1].diff == -1)
	{
	    int diff1 = abs(tree[2*src].mini - tree[2*src+1].maxi);
	    int diff2 = abs(tree[2*src+1].mini - tree[2*src].maxi);

	    tree[src].mini = min({tree[2*src].mini, tree[2*src+1].mini, tree[2*src].maxi, tree[2*src+1].maxi});
	    tree[src].maxi = max({tree[2*src].mini, tree[2*src+1].mini, tree[2*src].maxi, tree[2*src+1].maxi});



	    if (diff1 > diff2)
	    {
		tree[src].diff = diff1;
	    }
	    else
	    {
		tree[src].diff = diff2;
	    }
	}
    }
}

int main()
{  
    int n, q;
    cin >> n >> q;



}
