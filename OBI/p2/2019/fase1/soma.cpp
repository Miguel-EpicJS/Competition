#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;

    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
	cin >> a[i];
    }

    int t = 0;

    for (int i = 0; i < n; i++)
    {
	int s = 0;
	for (int j = i; j < n; j++)
	{
	    s += a[j];
	    if (s == k)
	    {
		t++;
	    }
	    if (s > k)
	    {
		break;
	    }
	}
    }

    cout << t << "\n";

    return 0;
}

