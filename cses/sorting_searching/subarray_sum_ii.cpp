#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;

    cin >> n >> x;

    vector<long long> prefix(n+1);
    map<long long, long long> ranges;
    prefix[0] = 0;
    ranges[0] = 0;

    for (int i = 1; i <= n; i++)
    {
	cin >> prefix[i];
	prefix[i] += prefix[i-1];
	ranges[i] = 0;
    }

    long long tot = 0;

    for (int i = 0; i <= n; i++)
    {
	tot += ranges[prefix[i] - x];
	ranges[prefix[i]]++;
    }

    cout << tot << "\n";

    return 0;
}

