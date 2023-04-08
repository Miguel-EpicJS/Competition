#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    map<int, int> friends, counter;

    for (int i = 0; i < n; i++)
    {
	char x;
	int y;
	cin >> x >> y;

	int t = 1;

	if (x == 'T')
	{
	    t = y-1;
	}
	else if (x == 'R')
	{
	    if (friends.find(y) == friends.end())
	    {
		friends[y] = 0;
		counter[y] = 0;
	    }
	    friends[y]++;
	}
	else
	{
	    friends[y]--;
	}

	for (auto &i : counter)
	{
	    if (friends[i.first] > 0)
		i.second += t;
	}
    }

    for (auto &i : counter)
    {
	if (friends[i.first] == 0)
	    cout << i.first << " " << i.second <<  "\n";
	else
	    cout << i.first << " -1\n";
    }

    return 0;
}

