#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007LL

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;

    cin >> n;

    vector<long long> fracs;

    for (int i = 0; i < n; i++)
    {
	long double x, y;
	cin >> x >> y;

	while(x != 1 && y != 1)
	{
	    x /= 2;
	    y /= 2;
	}

	fracs.push_back(log2(1.0*x/y));
    }
   
    long long ans = 0;
    long long curr = 0;

    for (auto i : fracs)
    {
	curr += i;
	if (curr < 0)
	{
	    curr = 0;
	}
	ans = max(curr, ans);
    }
    long long fim = 1;
    for (int i = 0; i < ans; i++)
    {
	fim =(fim * 2) % 1000000007LL;
    }

    cout << max(fim, 1LL) << "\n";

    return 0;
}

