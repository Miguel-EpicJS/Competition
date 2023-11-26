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

	long long n, m, x;

	cin >> n;

	vector<long long> mono1, bi1, mono2, bi2;

	for (int i = 0; i < n; i++)
	{
	    cin >> x;
	    mono1.push_back(x);
	}
	for (int i = 0; i < n; i++)
	{
	    cin >> x;
	    mono2.push_back(x);
	}
	
	cin >> m;

	long long biMaxAtck = 0;

	for (int i = 0; i < m; i++)
	{
	    cin >> x;
	    bi1.push_back(x);
	    biMaxAtck = max(biMaxAtck, x);
	}
	for (int i = 0; i < m; i++)
	{
	    cin >> x;
	    bi2.push_back(x);
	}
	long long a = 0;
	for (auto i : mono2) if (i >= biMaxAtck) a++;

	cout << a << "\n";
    }

    return 0;
}

