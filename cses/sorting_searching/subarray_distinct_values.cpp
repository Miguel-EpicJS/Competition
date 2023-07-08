#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;

    cin >> n >> k;

    vector<int> vals(n);
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
	cin >> vals[i];
    }

    int i = 0, j = 0;

    long long ans = 0;

    while (i < n)
    {
	while (j < n && ((int)(freq.size() < k) || freq.count(vals[j]) > 0))
	{
	    freq[vals[j]]++;
	    j++;
	}
	ans += j - i;
	freq[vals[i]]--;
	if (freq[vals[i]] == 0) freq.erase(vals[i]);
	i++;
    }

    cout << ans << "\n";

    return 0;
}

