#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<pair<int, int>> movies;

    for (int i = 0; i < n; i++)
    {
	int x, y;

	cin >> x >> y;

	movies.push_back({y, x});
    }

    sort(movies.begin(), movies.end());

    int last = 0;
    int tot = 0;

    for (auto i : movies)
    {
	if (i.second >= last)
	{
	    ++tot;
	    last = i.first;
	}
    }

    cout << tot << "\n";

    return 0;
}

