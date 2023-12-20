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

	int a = 0;
	int b = 0;
	int x;
	for (int i = 0; i < n; i++)
	{
	    cin >> x;
	    if (x == 1) a++;
	    else b++;
	}

	if (a % 2 == 1) cout << "NO\n";
	else if (b%2 == 1 && a < 2) cout << "NO\n";
	else cout << "YES\n";
    }

    return 0;
}

