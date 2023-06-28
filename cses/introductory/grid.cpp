#include <bits/stdc++.h>

using namespace std;

int d[] = {-1, 0, 1, 0, -1}, m[9][9];
string s;

bool check(int x, int y)
{
    if (m[x][y+1] && m[x][y-1] && !m[x-1][y] && !m[x+1][y]) return true;
    if (m[x+1][y] && m[x-1][y] && !m[x][y-1] && !m[x][y+1]) return true;
    return false;
}

int solve(int x, int y, int depth)
{
    if (x == 7 && y == 1) return depth == 48;
    if (depth == 48) return 0;
    if (check(x, y)) return 0;

    int ans = 0;
    m[x][y] = true;

    if (s[depth] == '?')
    {
	for (int j = 0; j < 4; j++)
	{
	    int dx = x + d[j];
	    int dy = y + d[j+1];

	    if (dx > 0 && dx < 9 && dy > 0 && dy < 9 && !m[dx][dy])
	    {
		ans += solve(dx, dy, depth+1);
	    }
	}
    }
    else
    {
	int dx = x, dy = y;

	if (s[depth] == 'U') dx--;
	else if (s[depth] == 'D') dx++;
	else if (s[depth] == 'L') dy--;
	else dy++;

	if (dx > 0 && dx < 9 && dy > 0 && dy < 9 && !m[dx][dy])
	{
	    ans = solve(dx, dy, depth+1);
	}
    }

    m[x][y] = false;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;

    for (int i = 0; i < 9; i++)
    {
	m[i][0] = true;
	m[i][8] = true;
	m[0][i] = true;
	m[8][i] = true;
    }

    m[1][1] = true;

    cout << solve(1, 1, 0) << "\n";

    return 0;
}

// based on: https://codeforces.com/blog/entry/79188#comment-950077

