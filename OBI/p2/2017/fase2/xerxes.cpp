#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int s1 = 0, s2 = 0;

    bool m[5][5];

    m[0][1] = true;
    m[1][2] = true;
    m[2][3] = true;
    m[3][4] = true;
    m[4][0] = true;
    m[0][2] = true;
    m[1][3] = true;
    m[2][4] = true;
    m[3][0] = true;
    m[4][1] = true;

    while(n--)
    {
	int x, y;
	cin >> x >> y;

	if (m[x][y]) s1++;
	else s2++;

    }

    if (s1>s2) cout << "dario\n";
    else cout << "xerxes\n";

    return 0;
}

