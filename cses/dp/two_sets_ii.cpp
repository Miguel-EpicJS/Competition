#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9+7;

long long modExp(int base, int exp)
{
    if (exp == 0) return 1;
    long long r = modExp(base, exp/2);
    if (exp%2 == 1)
    {
	return (((r * r) % mod) * base) % mod;
    }
    else
    {
	return (r*r) % mod;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int t = (n*(n+1))/2;

    if (t % 2 == 1)
    {
	cout << "0\n";
	return 0;
    }

    int ss = t / 2;
    vector<long long> dp(ss+1);

    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
	for (int j = ss; j >= i; j--)
	{
	    dp[j] = (dp[j] + dp[j-i]) % mod;
	}
    }

    cout << (dp[ss] * modExp(2, mod-2)) % mod;

    return 0;
}

