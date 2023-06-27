#include <bits/stdc++.h>

using namespace std;

const int mod = 1000000007;

long long power2(long long x)
{
    long long ans = 1;
    for (int i = 0; i < x; i++)
    {
	ans = (ans*2)%mod;
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;

    cin >> n;

    cout << power2(n) << "\n";

    return 0;
}

