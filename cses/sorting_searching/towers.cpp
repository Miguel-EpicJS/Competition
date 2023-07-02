#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> s;

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;

	auto it = upper_bound(s.begin(), s.end(), x);
	if (it == s.end()) s.push_back(x);
	else *it = x;
    }

    cout << s.size() << "\n";

    return 0;
}

