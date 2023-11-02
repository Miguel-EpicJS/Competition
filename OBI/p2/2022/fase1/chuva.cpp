#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, s, x;

    cin >> n >> s;

    long long sum = 0;

    map<long long, long long> m;

    m[sum] = 1;

    long long res = 0;

    for (int i = 0; i < n; i++)
    {
	cin >> x;
	sum += x;
	res += m[sum-s];
	m[sum]++;
    }
    cout << res << "\n";

    return 0;
}

