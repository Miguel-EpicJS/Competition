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
	long long a, b, c, m, n, k, x, y, z;

    	vector<long long> arrA, arrB;
	cin >> n;
	z = INT_MAX*2LL;
	k = INT_MAX*2LL;
	for (int i = 0; i < n; i++)
	{
	    cin >> x;
	    arrA.push_back(x);
	    z = min(x, z);
	}
	
	long long sum = 0, sum2 = 0;
	for (int i = 0; i < n; i++)
	{
	    cin >> x;
	    arrB.push_back(x);
	    k = min(k, x);
	    sum += x+z;
	}
	for (int i = 0; i < n; i++)
	{
	    sum2 += k+arrA[i];
	}
	cout << min(sum, sum2) << "\n";	

	

    }

    return 0;
}

