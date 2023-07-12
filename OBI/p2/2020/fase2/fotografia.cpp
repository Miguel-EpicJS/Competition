#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y;
    
    cin >> x >> y;

    if (x < y) swap(x, y);

    int m;

    cin >> m;

    int minS = 1000000;
    int id = -1;

    for (int i = 1; i <= m; i++)
    {
	int w, z;

	cin >> w >> z;
	
	if (w < z) swap(w, z);

	if (w < x || z < y) continue;
	if (w == x && z == y)
	{
	    id = i;
	    minS = -1;
	}

	if (abs(x-w)*y + abs(y-z)*x < minS)
	{
	    minS = abs(x-w)*y + abs(y-z)*x;
	    id = i;
	}
    }

    cout << id << "\n";

    return 0;
}

