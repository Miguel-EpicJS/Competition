#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    int arr[n+1];

    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
	cin >> arr[i];
	arr[i] += arr[i-1];
    }

    for(int i = 0; i < m; i++)
    {
	int x, y;
	cin >> x >> y;
	cout << arr[y] - arr[x-1] << "\n";
    }

    return 0;
}

