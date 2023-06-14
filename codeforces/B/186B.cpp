#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t1, t2, k;

    cin >> n >> t1 >> t2 >> k;

    vector<pair<double, int>> ans;

    for (int i = 1; i <= n; i++)
    {
	int x, y;
	cin >> x >> y;
	double v1 = ((x*t1 * (1-(k/100.0))) + (y*t2));
	double v2 = ((y*t1 * (1-(k/100.0))) + (x*t2));
	double val = max(v1, v2);

	ans.push_back({-val, i});
    }

    sort(ans.begin(), ans.end());


    for (auto i : ans)
    {
	cout << fixed << setprecision(2) << i.second << " " << -i.first/1.0 << "\n";
    }

    return 0;
}

