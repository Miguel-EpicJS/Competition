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
	long long x, y, z;
	cin >> x >> y >> z;
	

	if (x%2 == y%2 && x%2 == z%2) cout << "1 1 1\n";
	else if (x%2 == y%2) cout << "0 0 1\n";
	else if (z%2 == y%2) cout << "1 0 0\n";
	else cout << "0 1 0\n";


    }

    return 0;
}

