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

	string s;
	cin >> s;

	vector<bool> leafs(n+1, false);

	vector<pair<int, int>> nodes(n+1);

	vector<int> distLeaf(n+1, 1e9);

	for (int i = 1; i <= n; i++)
	{
	    int x, y;
	    cin >> x >> y;
	    nodes[i] = {x, y};
	    if (x == y && x == 0) leafs[i] = true;
	}

	int ans = 0;
	

    }

    return 0;
}

