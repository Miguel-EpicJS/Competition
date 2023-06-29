#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    vector<int> customers(m);

    set<array<int, 2>> tickets;

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	tickets.insert({x, i});
    }
    for (int i = 0; i < m; i++)
    {
	cin >> customers[i];
	auto it = tickets.lower_bound({customers[i]+1, 0});

	if (it == tickets.begin()) cout << "-1\n";
	else --it, cout << (*it)[0] << "\n", tickets.erase(it);
    }

    return 0;
}

