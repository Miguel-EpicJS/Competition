#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;

    cin >> n;

    map<long long, long long> nums;

    unsigned long long result = 0, inflation = 0;

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	result += x;
	if (nums.find(x) != nums.end())
	    nums[x]++;
	else 
	    nums[x] = 1;
    }

    int m;
    cin >> m;
    while(m--)
    {
	string s;
	unsigned long long x, y;
	cin >> s >> x;

	if (s[0] == 'I')
	{
	    inflation += x;
	    result += x*n*1LL;
	}
	else
	{
	    cin >> y;
	    if (x == y) {
		cout << result << "\n";
		continue;
	    }
	    long long a = y - x;
	    x -= inflation;
	    y -= inflation;
	    if (nums.find(x) != nums.end())
	    {
		result += a * nums[x];
		if (nums.find(y) == nums.end()) nums[y] = 0;
		nums[y] += nums[x];
		nums[x] = 0;
	    }
	}

	cout << result << "\n";
    
    }

    return 0;
}

