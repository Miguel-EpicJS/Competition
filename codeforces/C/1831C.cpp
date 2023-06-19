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
	int n;
	cin >> n;

	vector<pair<int, int>> vals;

	for (int i = 0; i < n-1; i++)
	{
	    int x, y;
	    cin >> x >> y;
	    vals.push_back({x, y});
	}
    }

    return 0;
}

