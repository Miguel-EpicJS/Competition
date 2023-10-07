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

    for (int i = 0; i < n-1; i++)
    {
	long long x;
	cin >> x;
	ans += x;
    }

    cout << (n*(n+1)/2)-ans << "\n";

    return 0;
}

