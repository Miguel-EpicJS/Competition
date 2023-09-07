#include <bits/stdc++.h>

using namespace std;

bool check(unsigned long long m, vector<pair<int, int>> &arr)
{
    long long a;
	bool ok = true;
	    for (auto i : arr)
	    {
		if (i.first >= m) continue;

		a = (m - i.first)*2- i.second;
		if (a >= 0) ok = false;
	    }
    return ok;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    
    cin >> t;

    while(t--)
    {
	unsigned long long b, c, n, x, y, z, k, w;
	vector<pair<int, int>> arr;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
	    cin >> x >> y;
	    arr.push_back({x, y});
	}

	unsigned long long s = 1, e = 1e9, m;
	long long a;

	x = -1;
	// got from https://cses.fi/book/book.pdf
	for (unsigned long long b = 1e9; b >= 1; b /= 2) {
	    while (check(x+b, arr)) x += b;
	}
	k = x;


	cout << k << "\n";
    }

    return 0;
}

