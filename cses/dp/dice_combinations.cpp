#include <bits/stdc++.h>

using namespace std;

int dp[1000001];

int calc(int n)
{
    if (dp[n] != 0) return dp[n];
    for (int i = 1; i <= 6; i++)
    {
	if (n-i >= 0)
	    dp[n] = (dp[n] + calc(n-i)) % 1000000007; 
    }
    return dp[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    if (n <= 6){ cout << (1 << (n-1)) << " "; return 0;}


    memset(dp, 0, sizeof(dp));


    dp[0] = 1;

    cout << calc(n) << "\n";
    
    return 0;
}

