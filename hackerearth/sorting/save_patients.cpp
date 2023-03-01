#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int a[n], b[n];

    for (int i = 0; i < n; i++)
	cin >> a[i];

    for (int i = 0; i < n; i++)
	cin >> b[i];

    sort(a, a+n);
    sort(b, b+n);

    int t = 0;

    for (int i = 0; i < n; i++)
    {
	if (a[i] > b[i])
	    t++;
	else
	    break;
    }

    if (t != n)
	cout << "No\n";
    else
	cout << "Yes\n";

    return 0;
}

