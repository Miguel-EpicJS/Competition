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

	cin >> n;

	vector<int> arr;

	bool ok = false;

	for(int i = 1; i <= n; i++)
	{
	    int x;
	    cin >> x;
	    if (x <= i) ok = true;
	}

	if(ok) cout << "YES\n";
	else cout << "NO\n";
    }

    return 0;
}

