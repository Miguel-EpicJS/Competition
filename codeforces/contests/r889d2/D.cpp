#include <bits/stdc++.h>
using namespace std;

const int MAX_UNLOCKS = 10001;

int dp[MAX_UNLOCKS];

int solve(const vector<int> &arr)
{
    int n = arr.size();
    dp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int un = MAX_UNLOCKS - 1; un >= arr[i]; un--)
        {
            if (dp[un - arr[i]])
                dp[un] = 1;
        }
    }

    int maxUnlockedSum = 0;
    for (int un = 1; un < MAX_UNLOCKS; un++)
    {
        if (dp[un])
            maxUnlockedSum = un;
    }

    return maxUnlockedSum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x;
    }

    if (arr[0] == 0)
    {
        cout << "0\n";
    }
    else
    {
        cout << solve(arr) << endl;
    }

    return 0;
}

