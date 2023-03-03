#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, x;

    cin >> n >> x;

    long long a[n];

    long long tot = 0;

    for (long long i = 0; i < n; i++)
    {
	cin >> a[i];
	tot += a[i];
    }
    sort(a, a+n);
    int r = n;

    for (long long i = 0; i < n && tot > x; i++)
    {
	tot -= a[i];
	r--;
    }

    cout << r << "\n";

    return 0;
}

