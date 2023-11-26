#include <bits/stdc++.h>

using namespace std;

struct FenwickTree { // https://cp-algorithms.com/data_structures/fenwick.html
    vector<int> bit;  // binary indexed tree
    int n;

    FenwickTree(int n) {
        this->n = n;
        bit.assign(n, 0);
    }

    FenwickTree(vector<long long> const &a) : FenwickTree(a.size()) {
        for (size_t i = 0; i < a.size(); i++)
            add(i, a[i]);
    }

    long long sum(int r) {
        int ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret += bit[r];
        return ret;
    }

    long long sum(int l, int r) {
	if (r > l) return 0;
        return sum(r) - sum(l - 1);
    }

    void add(int idx, int delta) {
        for (; idx < n; idx = idx | (idx + 1))
            bit[idx] += delta;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while(t--)
    {
	long long x, y, z, n, s;
	cin >> n >> x;
	vector<long long> arr, pref, suf;
	for (int i = 0; i < n; i++)
    	{
	    cin >> y;
	    arr.push_back(y);
	}

	FenwickTree ft(arr);

	for (int i = 0; i < x; i++)
	{
	    cin >> y;
	    if (y == 1)
	    {
		cin >> z;
		
		int l = 0, r = n-1;
		bool ok = false;
		while(l <= r)
		{
		    int m = l + (r-l)/2;
		    s = ft.sum(m);
		    if (s == z)
		    {
			ok = true;
			break;
		    }
		    
		    if (s < z)
		    {
			l = m+1;
		    }
		    else
		    {
			r = m-1;
		    }
		}
		l = 0, r = n/2;
		while(l <= r)
		{
		    int m = l + (r-l)/2;
		    s = ft.sum(m, n-1-m);
		    if (s == z)
		    {
			ok = true;
			break;
		    }
		    
		    if (s < z)
		    {
			l = m+1;
		    }
		    else
		    {
			r = m-1;
		    }
		}
		while(l <= r)
		{
		    int m = l + (r-l)/2;
		    s = ft.sum(m, n-1);
		    if (s == z)
		    {
			ok = true;
			break;
		    }
		    
		    if (s < z)
		    {
			l = m+1;
		    }
		    else
		    {
			r = m-1;
		    }
		}
		if (ok)
		{
		    cout << "YES\n";
		}
		else
		{
		    cout << "NO\n";
		}
	    }
	    else
	    {
		cin >> y >> z;
		y--;
		long long k = ft.sum(y, y);
		ft.add(y, z-k);
	    }

	}

    }

    return 0;
}

