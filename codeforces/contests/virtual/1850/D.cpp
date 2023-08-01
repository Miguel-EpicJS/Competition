#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;
    
    while(t--)
    {
	int n, k;
	cin >> n >> k;

	vector<int> arr(n);

	for (int i = 0; i < n; i++)
	{
	    cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	int ans = INT_MAX;
	int start = 0;

	for (int i = 1; i < n; i++)
	{
	    if (arr[i] - arr[i-1] > k) ans = min(ans, n - (i - start)), start = i;
	}

	if (ans == INT_MAX) ans = 0;
	if (start != n-1) ans = min(ans, n-(n-start));

	cout << ans << "\n";
    }
    
    return 0;
}

