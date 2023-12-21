#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

    int n;


    cin >> n;

    vector<int> a, cows, cows2(n);
    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	a.push_back(x-1);
    }

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	cows.push_back(x);
    }

    for (int i = 0; i < 3; i++)
    {
	for (int j = 0; j < n; j++)
	{
	    cows2[j] = cows[a[j]];
	}
	cows = cows2;
    }

    for (auto i : cows2)
    {
	cout << i << "\n";
    }

    return 0;
}

