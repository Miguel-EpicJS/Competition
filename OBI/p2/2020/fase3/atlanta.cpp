#include <bits/stdc++.h>

using namespace std;

set<int> ns;

int a, b;
void getdivs(int n)
{

    for (int i = 1; i*i <= n; i++)
    {
	if (n % i == 0)
	{
	    ns.insert(i);
	    ns.insert(n/i);
	}
    }

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> a >> b;
    
    int c = a+b;

    getdivs(c);

    vector<int> ans(ns.begin(), ns.end());
    int k = ans.size();
    for (int i = 0; i < k / 2; i++)
    {
	if (ans[i]*ans[k-i-1] - (ans[i]-2)*(ans[k-i-1]-2) == a && (ans[i]-2)*(ans[k-i-1]-2) == b)
	{
	    cout << min(ans[i], ans[k-i-1]) << " " << max(ans[i], ans[k-i-1]);
	    return 0;

	}
    }

    if (k % 2 == 1)
    {
	int i = ans[k/2];
	if (i*i - (i-2)*(i-2) == a && (i-2)*(i-2) == b)
	{
	    cout << i << " " << i;
	    return 0;
	}
    }

    cout << "-1 -1\n";

    return 0;
}

