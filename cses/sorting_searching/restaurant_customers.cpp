#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    set<pair<int, int>> pos;

    while(n--)
    {
	int x, y;
	cin >> x >> y;
	pos.insert({x, 1});
	pos.insert({y, -1});
    }

    int tot = 0, ans =0;

    for (auto i : pos)
    {
	tot += i.second;
	ans = max(tot, ans);
    }

    cout << ans << "\n";

    return 0;
}

