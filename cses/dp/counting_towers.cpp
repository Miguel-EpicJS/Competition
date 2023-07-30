#include <bits/stdc++.h>

using namespace std;

int dp[1000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;


    int hig = 0;

    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 8;

    while (t--)
    {
	int n;
	cin >> n;

	if (dp[n] != 0){ cout << dp[n] << "\n"; continue;}
	

    }

    return 0;
}

