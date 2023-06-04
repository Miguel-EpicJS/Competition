#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long d;
    int n;

    cin >> n >> d;

    long long arr[n+1];

    long long ans = -1;

    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
	if (arr[i+1] - arr[i] <= d)
	{
	    ans = arr[i+1];
	    cout << ans;
	    return 0;
	}
    }

    cout << ans;
    return 0;
}

