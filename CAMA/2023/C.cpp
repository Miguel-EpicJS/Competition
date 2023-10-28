#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;

    cin >> n >> k;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	arr.push_back(x);
    }

    sort(arr.rbegin(), arr.rend());

    long long ans = 0;

    for (int i = 0; i < k; i++) ans += arr[i];

    cout << ans << "\n";

    return 0;
}

