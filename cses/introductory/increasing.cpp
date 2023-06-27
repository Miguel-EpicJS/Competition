#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<long long> s(n);

    for (int i = 0; i < n; i++)
    {
	cin >> s[i];
    }

    long long moves = 0;

    for (int i = 1; i < n; i++)
    {
	if (s[i] >= s[i-1]) continue;

	moves += abs(s[i]-s[i-1]);
	s[i] += abs(s[i]-s[i-1]);
    } 

    cout << moves << "\n";

    return 0;
}

