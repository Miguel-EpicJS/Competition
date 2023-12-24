#include <bits/stdc++.h>

using namespace std;

struct FenwickTree { // https://cp-algorithms.com/data_structures/fenwick.html
    vector<int> bit;  // binary indexed tree
    int n;

    FenwickTree(int n) {
        this->n = n;
        bit.assign(n, 0);
    }

    FenwickTree(vector<int> const &a) : FenwickTree(a.size()) {
        for (size_t i = 0; i < a.size(); i++)
            add(i, a[i]);
    }

    int sum(int r) {
        int ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret += bit[r];
        return ret;
    }

    int sum(int l, int r) {
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
	
	long long x, y, z, a, b, c, n, m, k, d;

	cin >> n >> k >> d;

	FenwickTree ft(n+1);

	vector<long long> arr, v;

	for(int i = 0; i < n; i++)
	{
	    cin >> x;

	    arr.push_back(x);
	}

	for(int i = 0; i <k ; i++)
	{
	    cin >> x;

	    v.push_back(x);
	}

	int cnt = 0, mCnt = 0, da = 0;

	for (int i = 0; i < min({d, 2*n}); i++)
	{
	    cnt = 0;
	    for (int i = 0; i < n; i++)
	    {
		if ((arr[i] + ft.sum(n) - ft.sum(i)) == i+1) cnt++;
	    }
	    if (mCnt < cnt) mCnt = cnt, da = i+1;
	    ft.add(v[i%k], 1);

	}

	cout << mCnt + ((d-da+1)/2) << "\n";

    }
    

    return 0;
}

