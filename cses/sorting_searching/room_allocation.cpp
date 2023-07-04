#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<vector<int>> people;

    for (int i = 0; i < n; i++)
    {
	int x, y;
	cin >> x >> y;
	people.push_back({x, y, i});
    }

    sort(people.begin(), people.end());

    vector<int> rooms(n, -1);

    int id = 1;

    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pqrooms;

    for(int i = 0; i < n; i++)
    {
	if (pqrooms.size() == 0)
	{
	    rooms[people[i][2]] = id++;
	    pqrooms.push({people[i][1], id-1});
	}
	else 
	{
	    if (pqrooms.top()[0] < people[i][0])
	    {
		rooms[people[i][2]] = pqrooms.top()[1];
		vector<int> top = pqrooms.top();
		pqrooms.pop();
		pqrooms.push({people[i][1], top[1]});
	    }
	    else
	    {
		rooms[people[i][2]] = id++;
		pqrooms.push({people[i][1], id-1});
	    }
	}
    }
    cout << id-1 << "\n";
    for (auto i : rooms) cout << i << " ";
	
    return 0;
}

