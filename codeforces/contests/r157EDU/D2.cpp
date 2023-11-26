#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tt=1;

    //cin >> t;

    while(tt--)
    {
	long long n;


	cin >> n;

	vector<long long> arr, prefix, ans, bitC, fimBitC;
	
	for (int i = 1; i < n; i++)
	{
	    long long x;
	    cin >> x;
	    arr.push_back(x);
	}

	prefix.push_back(0);

	for (auto i : arr)
	{
	    prefix.push_back(prefix.back()^i);
	}
	for (int i = 0; i < n; i++) ans.push_back(i);
    
	for (int i = 19; i >= 0; i--)
	{
	    int count = 0;
	    for (auto j : ans)
	    {
		if (j & (1<<i))count++;
	    }
	    bitC.push_back(count);
	}

	for (int i = 0; i < 20; i--)
	{
	    int count = 0;
	    for (auto j : prefix)
	    {
		if (j & (1<<i))count++;
	    }
	    fimBitC.push_back(count);
	}

	int start = 0;

	for (int i = 0; i < bitC.size(); i++)
	{
	    if (bitC[i] != fimBitC[i]) start |= (1<<i);
	}



    }

    return 0;
}

