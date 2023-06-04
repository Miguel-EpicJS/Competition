#include <bits/stdc++.h>

using namespace std;

char grid[3002][3002];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int h, w;

    cin >> h >> w;

    vector<pair<int, int>> joia;
    map<int, vector<int>> orbe;
    map<int, vector<int>> ingo;

    for (int i = 1; i <= h; i++)
    {
	for (int j = 1; j <= w; j++)
	{
	    char x;
	    cin >> x;
	    if (x == 'J') 
	    {
		joia.push_back({i, j});
	    }
	    if (x == 'O') 
	    {
		if (orbe.find(i) == orbe.end())
		{
		    vector<int> k;
		    orbe[i] = k;
		}
		orbe[i].push_back(j);
	    }
	    if (x == 'I')
	    {
		if (ingo.find(j) == orbe.end())
		{
		    vector<int> k;
		    ingo[j] = k;
		}
		ingo[j].push_back(i);
	    }
	}
    }

    int ans = 0;
    int a= 0, b= 0;

    for (auto k : joia)
    {
	a = 0;
	b = 0;
	
	cout << "( " << k.first << " , " << k.second << " )\n";
	cout << "l: ";
	
	for (auto o : orbe[k.first])
	{
	   cout << o << " ";
	   if (k.second < o) a++;
        }
	
	cout << "\n";
	cout << "k: ";
	
	for (auto i : ingo[k.second])
	{
	    cout << i << " ";
	    if (k.first < i) b++;
	}
	if (ingo[k.second].size() == 0 || orbe[k.first].size() == 0)
	{
	    a = 0;
	    b = 0;
	}
	
	cout << "\n";
	cout << a << ", " << b << "\n";
	ans += a*b;
    }

    cout << ans;

    return 0;
}

