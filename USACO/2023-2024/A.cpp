#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, m;

    cin >> n >> m;

    vector<long long> cows, candy;

    for (int i = 0; i < n; i++)
    {
	long long x;
	cin >> x;
	cows.push_back(x);
    }

    for (int j = 0; j < m; j++)
    {
	long long x;
	cin >> x;
	candy.push_back(x);
    }

    long long a = 0, b = 0, c = 0;

    for (int i = 0; i < m; i++)
    {
	a = 0;
	b = candy[i];

	for (int j = 0; j < n; j++)
	{
	    if (a > b) break;
	    if (cows[j] > b)
	    {
		cows[j] += b-a;
		break;
	    }
	    else if (cows[j] > a)
	    {
		c = cows[j]-a;
		a = cows[j];
		cows[j] += c;
	    }
	}
    }

    for (auto i : cows) cout << i << "\n";


    return 0;
}

