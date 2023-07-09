#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, a, b;

    cin >> n >> a >> b;

    vector<long long> prefix(n+1);
    prefix[0] = 0;
    for (int i = 1; i <= n; i++)
    {
	int a;
	cin >> a;
	prefix[i] = a + prefix[i-1];
    }

    long long ans = -1e18;

    multiset<long long> ms;

    for (int i = a; i <= n; ++i)
    {
	if (i>b) ms.erase(ms.find(prefix[i-b-1]));

	ms.insert(prefix[i-a]);
	ans = max(ans, prefix[i] - *ms.begin());
    }

    cout << ans;

    return 0;
}

