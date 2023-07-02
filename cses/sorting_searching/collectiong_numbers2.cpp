#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    vector<int> pos(n+2), at(n+2);

    for (int i = 1; i <= n; i++)
    {
	int x;
	cin >> x;
	pos[x] = i;
	at[i] = x;
    }
    pos[0] = -1;
    pos[n+1] = 9999999;
    int rounds = 1;

    for (int i = 2; i <=n; i++)
    {
	if (pos[i] < pos[i-1]) rounds++;
    }

    for (int i = 0; i < m; i++)
    {
	int x, y;

	cin >> x >> y;

	int vx = at[x], vy = at[y];

	swap(at[x], at[y]);
	
	if (pos[vx-1] <= pos[vx] && pos[vx-1] > y) rounds++;
	if (pos[vx-1] > pos[vx] && pos[vx-1] <= y) rounds--;
	if (pos[vx] <= pos[vx+1] && y > pos[vx+1]) rounds++;
	if (pos[vx] > pos[vx+1] && y <= pos[vx+1]) rounds--;

	pos[vx] = y;
	
	if (pos[vy-1] <= pos[vy] && pos[vy-1] > x) rounds++;
	if (pos[vy-1] > pos[vy] && pos[vy-1] <= x) rounds--;
	if (pos[vy] <= pos[vy+1] && x > pos[vy+1]) rounds++;
	if (pos[vy] > pos[vy+1] && x <= pos[vy+1]) rounds--;
	
	pos[vy] = x;

	cout << rounds << "\n";
    }

    return 0;
}

