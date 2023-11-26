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

    auto fun = [&](string X) {
        int64_t S = 0;
        for(auto &Y: X) 
            S += Y-'0';
        return S;
 
    };

    while(t--)
    {

	long long a, b, c, n, m, k;
	string ns;
	cin >> n;

	vector<long long> arr;
	
	for (int i = 0; i < n; i++)
    	{
	    int x;
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
	    for (auto j : ns) b+= j-'0';

	    if(a == 1)
	    {
		ans += l[a][b];
	    }
	    else if (a == 2)
	    {
		ans += l[a][b];
	    }
	    else if (a == 3)
	    {
		ans += l[a][b];
		string x = ns.substr(0, 1);
		string y = ns.substr(1, 2);
		string z = ns.substr(0, 2);
		string w = ns.substr(2, 1);
		
		ans += l[1][fun(y) - fun(x)];
		ans += l[1][fun(z) - fun(w)];
	    }
	    else if (a == 4)
	    {
		ans += l[a][b];
		string x = ns.substr(0, 1);
		string y = ns.substr(1, 3);
		string z = ns.substr(0, 3);
		string w = ns.substr(3, 1);
		
		ans += l[2][fun(y) - fun(x)];
		ans += l[2][fun(z) - fun(w)];
	    }
	    else if (a == 5)
	    {
		ans += l[a][b];
		string x = ns.substr(0, 1);
		string y = ns.substr(1, 4);
		string z = ns.substr(0, 4);
		string w = ns.substr(4, 1);
		
		ans += l[3][fun(y) - fun(x)];
		ans += l[3][fun(z) - fun(w)];

		x = ns.substr(0, 2);
		y = ns.substr(2, 4);
		z = ns.substr(0, 3);
		w = ns.substr(3, 2);
		
		ans += l[1][fun(y) - fun(x)];
		ans += l[1][fun(z) - fun(w)];
	    }

	}
	cout << ans << "\n";

    }

    return 0;
}

