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
	long long a, b, c, x, y, z, n, m, k;

	cin >> a >> k;

	string ss;

	cin >> ss;

	int cnt = 0;

	for (auto i : ss)
	{
	    if (i == 'B') cnt++;
	}

	if (cnt == k) cout << "0\n";

	vector<int> pref;

	pref.push_back(0);

	for (int i = 0; i < n; i++)
	{
	    int crr = pref.back();
	    if (ss[i] == 'B') crr++;
	    pref.push_back(crr);
	}

	int diff = k - cnt;

	if (diff == 0) continue;
	int act = 0;
	if (diff > 0)
	{
	    for (int i = 0; i < ss.size(); i++)
	    {
		if (diff == 0) break;
		if (ss[i] == 'A') diff--;
		act++;
	    }
	    cout << "1\n" << act << " B\n";
	}
	else
	{
	    for (int i = 0; i < ss.size(); i++)
	    {
		if (diff == 0) break;
		if (ss[i] == 'B') diff++;
		act++;
	    }
	    cout << "1\n"<< act << " A\n";
	}

    }


    return 0;
}

