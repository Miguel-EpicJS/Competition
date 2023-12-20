#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    string s;

    cin >> s;

    vector<int> amount;

    int last = 0;

    for (int i = 0; i < n; i++)
    {
	if (last == 0 && s[i] == '1')
	{
	    amount.push_back(1);
	    last = 1;
	}
	else if (s[i] == '1')
	{
	    amount[amount.size()-1]++;
	}
	else 
	{
	    last = 0;
	}
    }

    sort(amount.begin(), amount.end());

    long long ans = amount.size();

    for (int i = 1; i < amount.size(); i++)
    {
	ans += amount[i] - amount[0];
    }

    cout << ans << "\n";

    return 0;
}

