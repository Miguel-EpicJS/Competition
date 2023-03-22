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
	int green, purple;

	cin >> green >> purple;

	int sum1 = 0, sum2 = 0;

	int n;

	cin >> n;

	while(n--)
	{
	    int x, y;
	    cin >> x >> y;
	    if (x)
	    {
		sum1 += green;
		sum2 += purple;
	    }

	    if (y)
	    {
		sum1 += purple;
		sum2 += green;
	    }
	}

	cout << min(sum1, sum2) << "\n";
    }

    return 0;
}

