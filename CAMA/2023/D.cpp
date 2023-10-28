#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;

    cin >> n;

    multiset<long long> ans;

    int i = 0;
    n--;
    long long curr = 0;
    while (n > 0)
    {
	if (n - (1<<i) >= 0)
	{
	    ans.insert(1<<i);
	    n -= (1<<i);
	    curr += (1<<i);
	    i++;
	}
	else
	{
	    ans.insert(ceil(n));
	    break;
	}
	if (n==0) break;
    }

    cout << ans.size() << "\n";
    vector<int> arr;
    
    for (auto i : ans)
    {
	cout << i << " ";
    	arr.push_back(i);
    }
     

    cout << "\n";

    return 0;
}

