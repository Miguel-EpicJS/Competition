#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<int> pesos;

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	pesos.push_back(x);
    }

    pesos.push_back(0);

    sort(pesos.begin(), pesos.end());

    string ans = "S\n";

    for (int i = 1; i <= n; i++)
    {
	if (pesos[i] - pesos[i-1] > 8)
	    ans = "N\n";
    }

    cout << ans;

    return 0;
}

