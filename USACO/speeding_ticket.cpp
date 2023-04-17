#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    freopen("speeding.in", "r", stdin);

    cin >> n >> m;

    vector<int> lim(100), speed(100);

    int ind = 0;

    for (int i = 0; i < n; i++)
    {
	int x, y;
	cin >> x >> y;
	for (int j = 0; j < x; j++)
	{
	    lim[ind] = y;
	    ind++;
	}
    }

    ind = 0;

    for (int i = 0; i < m; i++)
    {
	int x, y;
	cin >> x >> y;
	for (int j = 0; j < x; j++)
	{
	    speed[ind] = y - lim[ind];
	    ind++;
	}

    }

    int c = *max_element(speed.begin(), speed.end()) ;
    
    if (c < 0)
	c = 0;

    freopen("speeding.out", "w", stdout);
    cout << c << "\n";

    return 0;
}

