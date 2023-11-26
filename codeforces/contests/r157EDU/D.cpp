#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tt=1;

    //cin >> t;

    while(tt--)
    {
	long long n;


	cin >> n;

	vector<long long> arr, prefix;
	
	for (int i = 1; i < n; i++)
	{
	    long long x;
	    cin >> x;
	    arr.push_back(x);
	}

	prefix.push_back(0);

	for (auto i : arr)
	{
	    prefix.push_back(prefix.back()^i);
	}

	vector<array<int, 2>> t({{-1, -1}});

	auto add = [&](int x)
	{
	    int v = 0;
	    for (int i = 19; i >= 0; --i)
	    {
		int j = (x >> i) & 1;
		if (t[v][j] == -1)
		{
		    t[v][j] = t.size();
		    t.push_back({-1, -1});
		}
		v = t[v][j];
	    }
	};

	for (int x : prefix) add(x);
	auto get = [&](int x)
	{
	    int v = 0;
	    for (int i = 19; i >= 0; --i)
	    {
		int j = (x >> i) & 1;
		if (t[v][j^1] != -1 ) j ^= 1;
		x ^= j << i;
		v = t[v][j];
	    }
	    return x;
	};

	for (int x = 0; x < n; ++x)
	{
	    if (get(x) == n - 1)
	    {
		for (int i : prefix) cout << (x^i) << ' ';
		break;
	    }
	}


    }

    return 0;
}

