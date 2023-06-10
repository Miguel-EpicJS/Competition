#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, s;

    cin >> n >> s;

    vector<int> a(n+1);
    a[0]=0-s-1;
    for (int i = 1; i <= n; i++)
    {
	int x, y;
	cin >> x >> y;
	a[i] = x*60 + y;
    }

    int ans = a[n] + s+1;

    for (int i = 1; i <= n; i++)
    {
	if (a[i]-a[i-1] > 2*s+1)
	{
	    ans = a[i-1] + s+1;
	    break;
	}
    }

    cout << ans / 60 << " " << ans % 60 << "\n";

    return 0;
}

