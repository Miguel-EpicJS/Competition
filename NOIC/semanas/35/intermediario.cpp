#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;

    cin >> n;

    vector<long long> a(n+1);

    for (int i = 1; i <= n; i++)
    {
	cin >> a[i];
    }

    long long ans = 0;

    long long q = 0;

    for (int i = 1; i <= n; i++)
    {
	if (a[i] == i) ans++;
    }

    q = ans * (ans-1) / 2;

    for (int i = 1; i <= n; i++)
    {
	if (a[i] > i && a[a[i]] == i)
	{
	    q++;
	}
    }

    cout << q << "\n";

    return 0;
}

