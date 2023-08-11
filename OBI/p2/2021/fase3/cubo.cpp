#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long a, b;

    cin >> a >> b;

    int i = cbrt(a), x = 0;

    int ans = 0;

    for (; i*i*i <= b; i++)
    {
	x = sqrt(i*i*i);
	if (x*x == i*i*i) ans++;
    }

    cout << ans << "\n";

    return 0;
}

