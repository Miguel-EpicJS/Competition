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

	long long a, b, xk, yk, xq, yq;

	cin >> a >> b >> xk >> yk >> xq >> yq;

	set<pair<long long, long long>> arr;

	arr.insert({a, b});
	arr.insert({-a, b});
	arr.insert({a, -b});
	arr.insert({-a, -b});
	
	arr.insert({b, a});
	arr.insert({-b, a});
	arr.insert({b, -a});
	arr.insert({-b, -a});

	long long ans = 0;

	vector<pair<long long, long long>> pos;

	for (auto i : arr)
	{
	    pos.push_back({xk-i.first, yk-i.second});
	}

	for (auto i : pos)
	{
	    if ((abs(i.first - xq) == a &&  abs(i.second - yq) == b)||(abs(i.first - xq) == b &&  abs(i.second - yq) == a))ans++;
	}


	cout << ans << "\n";


    }

    return 0;
}

