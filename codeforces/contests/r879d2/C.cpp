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
	int n;
	string l, r;

	cin >> n >> l >> r;


	int diff = 0;
	int diffR = 0;

	for (int i = 0; i < n; i ++)
	{
	    if (l[i] != r[i])
		diff++;
	    if (l[i] != r[n-i-1])
		diffR++;
	}

	if (diff == 0)
	{
	    cout << "0\n";
	    continue;
	}
	if (diffR == 0)
	{
	    cout << "2\n";
	    continue;
	}

	int tot = min((2*diff - (diff%2)), (2*diffR - (1 - (diffR % 2))));
	cout << tot << "\n";

    }

    return 0;
}

