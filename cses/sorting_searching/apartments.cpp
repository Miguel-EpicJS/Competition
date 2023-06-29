#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, k;

    cin >> n >> m >> k;

    vector<int> ni(n), mi(m);

    for (int i = 0; i < n; i++)
    {
	cin >> ni[i];
    }

    for (int i = 0; i < m; i++)
    {
	cin >> mi[i];
    }

    sort(ni.begin(), ni.end());
    sort(mi.begin(), mi.end());

    int i = 0, j = 0;
    int tot = 0;

    for (; i < n; ++i)
    {
	while(j < m && mi[j] < ni[i] - k) ++j;
	
	if (j < m && mi[j] <= ni[i] + k) ++tot, ++j;

    }

    cout <<tot << "\n";

    return 0;
}

