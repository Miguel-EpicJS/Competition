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

	string k = l;

	reverse(k.begin(), k.end());

	int diff = 0;
	int diffR = 0;

	for (int i = 0; i < n; i ++)
	{
	    if (l[i] != r[i])
		diff++;
	    if (l[i] != k[i])
		diffR++;
	}

	if(diff <= 1)
	{
	    cout << diff << "\n";
	}
	else if (diffR <= 1)
	{
	    cout << "1\n";
	}
    }

    return 0;
}

