#include <bits/stdc++.h>

using namespace std;

int solve(vector<long long> &a, int i, int x, long long weight)
{
    if (i >= a.size()) return 1;
    if (weight == x) return 1;
    
    int takeAndGo = 1;
    if (weight+a[i] <= x)
    {
	takeAndGo = solve(a, i+1, x, weight+a[i]);
    }
    int dont = solve(a, i+1, x, weight);
    int returnAndGo = 1+solve(a, i+1, x, 0);
    
    return min(min(takeAndGo, dont), returnAndGo);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    long long x;

    cin >> n >> x;

    vector<long long> ar(n);

    for (int i = 0; i < n; i++)
    {
	cin >> ar[i];
    }

    cout << solve(ar, 0, x, 0);

    return 0;
}

