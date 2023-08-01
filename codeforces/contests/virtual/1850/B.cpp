#include <bits/stdc++.h>

using namespace std;

int arr[60][2];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while (t--)
    {
	int n;
	cin >> n;

	int ans = 1;
	int tot = 0;
	for (int i = 1; i <= n; i++)
	{
	    cin >> arr[i][0] >> arr[i][1];
	    if (arr[i][0] > 10) continue;
	    if (arr[i][1] > tot) ans = i, tot = arr[i][1];
	}

	cout << ans << "\n";
    }

    return 0;
}

