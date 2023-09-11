#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while(t--)
    {
	long long n, m, d;
	cin >> n >> m >> d;
	vector<long long> loc;
	for (int i = 0; i <m; i++)
	{
	    long long x;
	    cin >> x;
	    loc.push_back(x);
	}
	long long amount = 1;
	long long last = 1;
	long long last2 = 1;
	vector<int> amounts;
	loc.push_back(n);
	for (int i = 0; i < loc.size()-1; i++)
	{
	    if (loc[i] == 1)
	    {
		amount = 1;
	    }
	    else
	    {
		amount += (loc[i] - last)/d;
		amount++;

		last2 = last;
		last = loc[i];
	    }

	    amounts.push_back((loc[i+1]-last)/d);

	}

	amount += (n-last)/d;

	for (auto i : amounts)
	{
	    cout << i << " ";
	}

	cout << amount << "\n";

    }

    return 0;
}

