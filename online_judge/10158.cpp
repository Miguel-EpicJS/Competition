
#include <bits/stdc++.h>

using namespace std;

int friendsAndEnemies[20020], weight[20020] = {0}; 

int find(int x)
{
    if (x == friendsAndEnemies[x]) return x;
    return friendsAndEnemies[x] = find(friendsAndEnemies[x]);
}

void join(int x, int y)
{
    x = find(x);
    y = find(y);

    if (x != y)
    {
	if (weight[x] >= weight[y])
	{
	    friendsAndEnemies[y] = x;
	    weight[x] += weight[y];
	}
	else
	{
	    friendsAndEnemies[x] = y;
	    weight[y] += weight[x];
	}
    }
}

int enemyId(int x, int n)
{
    return x+n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    while (cin >> n)
    {
	for (int i = 0; i < 2*n; i++)
	{
	    friendsAndEnemies[i] = i;
	    weight[i] = 1;
	}
	int c, x, y;
	while(cin >> c >> x >> y )
	{
	    if (c==0) break;

	    if (c == 1)
	    {
		if (find(x) == find(enemyId(y, n)) || find(y) == find(enemyId(x, n)))
		{
		    cout << "-1\n";
		}
		else
		{
		    join(x, y);
		    join(enemyId(x, n), enemyId(y, n));
		}
	    }
	    else if (c==2)
	    {
		if (find(x) == find(y) || find(enemyId(x, n)) == find(enemyId(y, n)))
		{
		    cout << "-1\n";
		}
		else
		{
		    join(x, enemyId(y, n));
		    join(y, enemyId(x, n));
		}
	    }
	    else if (c==3)
	    {
		if (find(x) == find(y) || find(enemyId(x, n)) == find(enemyId(y, n)))
		{
		    cout << "1\n";		
		}
		else cout << "0\n";
	    }
	    else if (c==4)
	    {
		if (find(x) == find(enemyId(y, n)) || find(y) == find(enemyId(x, n)))
		{
		    cout << "1\n";
		}
		else cout << "0\n";
	    }
	}
    }

    return 0;
}

// based on https://falloutcodes.com/2023/03/28/uva-10158-war/
