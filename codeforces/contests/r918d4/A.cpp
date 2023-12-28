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
	long long a, b, c, n;

	int ar[3];
	    
	cin >> ar[0] >> ar[1] >> ar[2];

	sort(ar, ar+3);

	if (ar[0] == ar[1]) cout << ar[2] << "\n";
	else cout << ar[0] << "\n";
    }

    return 0;
}

