#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while (t--)
    {
	long long n;

	cin >> n;

	string s;
	cin >> s;

	bool ok = false;

	int a = 0;
	for (auto i : s) if (i == '0')a++;

	if (a != 0) cout << "YES\n";
	else cout << "NO\n";

    }

    return 0;
}

