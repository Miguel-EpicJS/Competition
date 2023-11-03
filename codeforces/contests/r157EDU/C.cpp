#include <bits/stdc++.h>

using namespace std;

int l[6][50];
int need[6][50];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    t = 1;
    //cin >> t;

    

    memset(l, 0, sizeof(l));
    memset(need, 0, sizeof(need));

    while(t--)
    {

	long long a, b, c, x, y, z, n, m, k;
	string ns;
	cin >> n;

	vector<long long> arr;
	
	for (int i = 0; i < n; i++)
    	{
	    cin >> x;
	    arr.push_back(x);

	    int ss = 0, sz;
	    ns = to_string(x);
	    sz = ns.size();

	    for (auto j : ns)
	    {
		ss += j-'0';
	    }
	    l[sz][ss]++;

	}
	long long ans = 0;
	for (auto i : arr)
	{
	    ns = to_string(i);
	    a = ns.size();

	    
	    b = 0;
	    for (auto j : ns) b+=j-'0';

	    c = ns[a-1];
	    need[a][b]++; 
	    if (a-2 > 0)
	    {
		a-=2;
		need[a][b-(c+c-'0'-'0')]++;	
		need[a][b-(ns[0]+ns[0]-'0'-'0')]++;	
	    }
	    if (a-2 > 0)
	    {
		a-=2;
		need[a][b-(c+c-'0'-'0')]++;	
		need[a][b-(ns[0]+ns[0]-'0'-'0')]++;	
	    }

	}

	for (auto i : arr)
	{
	    ns = to_string(i);
	    a = ns.size();

	    
	    b = 0;
	    for (auto j : ns) b+=j-'0';

	    ans += need[a][b];
	}
	
	if (n > 2 && arr[0] != arr[1] )ans+=2;

	cout << ans << "\n";

    }

    return 0;
}

