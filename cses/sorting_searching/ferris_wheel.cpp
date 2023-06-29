#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;

    cin >> n >> x;

    vector<int> p(n);

    for (int i = 0; i < n; i++)
    {
	cin >> p[i];
    }

    sort(p.begin(), p.end());

    int tot = 0;

    int i = 0, j = n-1;

    while(i <= j && i < n && j >= 0)
    {
	if (p[i] + p[j] <= x) ++tot, ++i, --j;
	else ++tot, --j;
    }

    cout << tot << "\n";

    return 0;
}

