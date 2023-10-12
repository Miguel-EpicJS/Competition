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
	long long x, y, z, k, w, a, b, c, n, m;

	vector<long long> arr(3);

	cin >> arr[0] >> arr[1] >> arr[2];

	sort(arr.begin(), arr.end());
	if (arr[0] == arr[1] && arr[1] == arr[2]) cout << "YES\n";
	else if (arr[0] == arr[1] && arr[2] == arr[0]*2) cout << "YES\n";
	else if (arr[0] == arr[1] && arr[2] == arr[0]*3) cout << "YES\n";
	else if (arr[0] == arr[1] && arr[2] == arr[0]*4) cout << "YES\n";
	else if (arr[1] == arr[2] && arr[0]*2 == arr[1]) cout << "YES\n";
	else if (arr[0]*2 == arr[1] && arr[2] == arr[1]+arr[0]) cout << "YES\n";
	else cout << "NO\n";

    }

    return 0;
}

