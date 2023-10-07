#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;

    cin >> n;

    vector<long long> arr;

    for (int i = 0; i < n; i++)
    {
	long long x;
	cin >> x;
	arr.push_back(x);
    }
    long long ans = 0;
    for (int i = 0; i < n-1; i++)
    {
	if (arr[i+1] < arr[i])
	{
	    ans += (arr[i] - arr[i+1]);
	    arr[i+1] = arr[i];
	}
    }

    cout << ans << "\n";

    return 0;
}

