#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr, int i, int p1, int p2, vector<int> &dp)
{
    if (i >= arr.size()) return 0;
    //if (dp[i] != 0) return dp[i];

    int dont = solve(arr, i+1, p1, p2, dp);
    int take = 0;

    if (p1 == -1 || (arr[i] == p1 && arr[i] != p2))
    {
	take = 1 + solve(arr, i+1, p2, arr[i], dp);
    }

    dp[i] = max(take, dont);

    return dp[i];
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;

    vector<int> dp(n, 0);

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	arr.push_back(x);
    }
    if (n <= 2)
    {
	cout << n;
	return 0;
    }
    cout << solve(arr, 0, -1, -1, dp) << "\n"; 

    return 0;
}
