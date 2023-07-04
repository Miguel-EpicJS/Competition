#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x, y;

    cin >> n >> y;

    vector<pair<int, int>> val(n);

    for (int i = 0; i < n; i++)
    {
	int k;
	cin >> k;
	val[i] = {k, i};
    }

    sort(val.begin(), val.end());

    for (int l = 0; l < n; l++)
    {

	int i = 0, j = n-1;

	x = y - val[l].first;
	int tmp = val[l].first;
	val[l].first = 1199999999;
	if (x < 0) continue;
	while (i != j)
	{
	    if (val[i].first + val[j].first == x)
	    {
	        cout << val[i].second + 1 << " " << val[j].second + 1 << " " << val[l].second + 1 << "\n";
		return 0;
	    }

	    if (val[i].first + val[j].first < x) i++;
	    else j--;
	}
	val[l].first = tmp;

    }
    cout << "IMPOSSIBLE\n";

    return 0;
}

