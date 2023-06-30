#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    vector<int> pos(n+1), at(n+1);

    for (int i = 1; i <= n; i++)
    {
	int x;
	cin >> x;
	pos[x] = i;
	at[i] = x;
    }

    int rounds = 1;

    for (int i = 2; i <=n; i++)
    {
	if (pos[i] < pos[i-1]) rounds++;
    }

    for (int i = 0; i < m; i++)
    {
	int x, y;
	cin >> x >> y;

	if (x > y) swap(x, y);

	int px = at[x], py = at[y];

	swap(at[x], at[y]);
	swap(pos[px], pos[py]);
   
	if (pos[i] < pos[i-1]) rounds++;

	cout << rounds << "\n";
    }

    return 0;
}

