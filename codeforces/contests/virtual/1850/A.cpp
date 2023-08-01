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
	int x, y, z;
	cin >> x >> y >> z;

	bool ok = false;

	if (x + y >= 10) ok = true;
	else if (x + z >= 10) ok = true;
	else if (y + z >= 10) ok = true;

	if (ok) cout << "YES\n";
	    else cout << "NO\n";
    }
    
    return 0;
}

