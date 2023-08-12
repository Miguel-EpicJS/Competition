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
	int n;
	cin >> n;

	priority_queue<long long> pq[n];
	long long m = INT_MAX;

	for (int i = 0; i < n; i++)
	{
	    long long x;
	    cin >> x;
	    for (int j =0; j < x ;j++)
	    {
		long long y;
		cin >> y;
		m = min(m, y);
		pq[i].push(-y);
	    }
	}

	if (n == 1)
	{
	    cout << m << "\n";
	}
	else
	{
	    long long ans = m;
	    long long least = INT_MAX;
	    for (auto k : pq)
	    {
		k.pop();
		ans += -k.top();
		least = min(least, -k.top());
	    }
	    cout << ans-least << "\n";
	}

    }

    return 0;
}

