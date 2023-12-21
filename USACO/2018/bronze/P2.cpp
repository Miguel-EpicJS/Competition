#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    
    int n;

    cin >> n;

    vector<array<int, 3>> cows;

    for (int i = 0; i < n; i++)
    {
	int x, y, z;
	cin >> x >> y >> z;
	cows.push_back({x, y ,z});
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
	int crr = cows[i][2];
	
	for (int j = 0; j < n; j++)
	{
	    if (i == j) continue;
	    
	    if (cows[i][1] > cows[j][0] && cows[i][1] < cows[j][1])
	    {
		crr+=cows[j][2];
	    }
	}
	ans = max(crr, ans);
    }

    cout << ans << "\n";

    return 0;
}

