#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    vector<int> a;

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	a.push_back(x);
    }

    sort(a.begin(), a.end());

    int ans = 0;

    for (int i = 0; i < m; i++)
    {
	ans += a[i];
    }

    cout << ans << "\n";

    return 0;
}

