#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int ans = 0;

    while(n--)
    {
	int x, y, z;
	cin >> x >> y >> z;
	ans += (x+y+z) / 2;
    }

    cout << ans << "\n";

    return 0;
}

