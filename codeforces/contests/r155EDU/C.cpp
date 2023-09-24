#include <bits/stdc++.h>

using namespace std;

#define mod 998244353

long long fat(long long n)
{
    long long ans = 1;

    for (long long i = 1; i <= n; i++)
    {
	ans = (ans * i) % mod;
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
     

    cin >> t;

    while(t--)
    {
	long long a, b, c, m, n, k, x, y, z;
    
	string s;

	cin >> s;

	bool ok = true;

	a = 0;
	
	vector<long long> arr;

	for (auto i : s){ a+= i-'0';}


	for (int i = 1; i < s.size(); i++)
	{
	    if(s[i-1] == s[i]) ok = false;
	}

	if (ok)
	{
	    cout << "0 1\n";
	}
	else
	{
	
	    arr.push_back(1);
	    for (int i = 1; i < s.size(); i++)
	    {
		if (s[i-1] == s[i]) arr[arr.size()-1]++;
		else arr.push_back(1);
	    }

	    vector<long long> ans;
	    long long xx = 0;
	    for (auto i : arr)
	    {
		ans.push_back(fat(i));
		xx += i;
	    }
	    xx -= ans.size();
	    long long ss = 1LL;
	    for (long long i : ans)
	    {
		ss = (1LL*ss*i) % mod;
	    }

	    cout << xx << " " << ss << "\n";
	
	}
	
    }

    return 0;
}

