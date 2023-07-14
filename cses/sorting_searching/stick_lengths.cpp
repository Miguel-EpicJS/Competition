#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    long long ans = 0;
    long long mid = arr[n/2];

    for (auto i : arr)
    {
	ans += abs(mid-i);
    }

    cout << ans << "\n";

    return 0;
}
