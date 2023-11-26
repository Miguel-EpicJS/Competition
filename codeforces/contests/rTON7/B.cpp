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
	long long x, y, z;
	cin >> x;

	string ss;
	cin >> ss;

	deque<int> a, b;

	for (int i = 0; i < x; i++)
	{
	    if (ss[i]=='A')a.push_back(i);
	    else b.push_back(i);
	}

	
	vector<bool> sw(x, false);

	long long ans = 0;

	while(a.size())
	{
	    int k = a.back();
	    a.pop_back();
	    while (sw[k] == false && k+1 < x && ss[k] == 'A' && ss[k+1] =='B')
	    {
		sw[k] = true;
		ss[k] = 'B';
		ss[k+1] = 'A';
		ans++;
		k++;
	    }
	}

	cout << ans << "\n";

    }

    return 0;
}

