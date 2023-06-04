#include <bits/stdc++.h>

using namespace std;


long long orbes[3010][3010];
long long ingots[3010][3010];
char grid[3010][3010];
int main()
{
    long long h, w;

    cin >> h >> w;


    for (long long i = 0; i < h; i++)
    {
	for (long long j = 0; j < w; j++)
	{
	    cin >> grid[i][j];
	}
    }

    for (long long i = 0; i < h; i++)
    {
	for (long long j = w; j >= 0; j--)
	{
	    orbes[i][j] = orbes[i][j+1] + (grid[i][j] == 'O');
	}
    }

    for (long long j = 0; j < w; j++)
    {
	for (long long i = h; i >= 0; i--)
	{
	    ingots[i][j] = ingots[i+1][j] + (grid[i][j] == 'I');
	}
    }

    long long ans = 0;
    for (long long i = 0; i < h; i++)
    {
	for (long long j = 0; j < w; j++)
	{
	    if (grid[i][j] == 'J')
	    {
		ans += ingots[i][j] * orbes[i][j];
	    }
	}
    }


    cout << ans;

    return 0;
}

