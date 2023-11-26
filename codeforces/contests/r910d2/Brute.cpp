#include <bits/stdc++.h>

using namespace std;

int last = 0;

long long cmp(long long a, long long b, map<long long, long long> &dp, long long &mn)
{
    if (b <= a) return 0;
    //if (dp.find(b) != dp.end()) return dp[b];


    last =  b-ceil(b/2.0);
    auto i = cmp(a, ceil(b/2.0), dp, mn);

    auto j = cmp(a, b-ceil(b/2.0), dp, mn);


    return i+j+1;
}

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

	cin >> a;
	vector<long long> arr;
	for (int i = 0; i < a; i++)
	{
	    cin >> x;
	    arr.push_back(x);
	}

	reverse(arr.begin(), arr.end());

	stack<int> stck;
	stck.push(INT_MAX);
	int i = 0;
	long long ans = 0;
	while (i < arr.size())
	{
	    if (arr[i] <= stck.top())
	    {
		stck.push(arr[i]);
		i++;
	    }
	    else
	    {
		a = arr[i];
		c = arr[i];
		x = 0;
		b = stck.top();
		y = 0;
		map<long long, long long> dp;
		auto ansss = cmp(b, a, dp, c);
		ans += ansss;
		stck.push(last);
		i++;
	    }
	}
	cout << ans << "\n";
    }

    return 0;
}

