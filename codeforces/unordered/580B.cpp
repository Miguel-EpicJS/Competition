#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, d;

    cin >> n >> d;

    vector<pair<long long, long long>> friends;

    long long maxx = 0;
    for (int i = 0; i < n; i++)
    {
	long long x, y;
	cin >> x >> y;

	friends.push_back({x, y});
	maxx = max(maxx, y);
    }

    sort(friends.begin(), friends.end());


    int p1 = 0;

    long long curr = 0;


    for (int i = 0; i < n; i++)
    {
	if (friends[i].first-friends[p1].first < d )
	{
	    curr+=friends[i].second;
	    maxx = max(curr, maxx);
	}
	else 
	{
	    while(friends[i].first-friends[p1].first >= d)
	    {
		curr -= friends[p1].second;
		p1++;
	    }
	}
    }

    cout << maxx << "\n";

    return 0;
}

