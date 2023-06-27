#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;

    cin >> n;

    long long ans = 0;

    for (int i = 1; i <= 13; i++)
    {
	ans += n/pow(5, i);
    }

    cout << ans << "\n";

    return 0;
}

