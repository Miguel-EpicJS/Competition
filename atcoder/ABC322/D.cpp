#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char m1[4][4], m2[4][4], m3[4][4];

    for (int i = 0; i < 4; i++)
    {
	for (int j = 0; j < 4; j++)
	{
	    cin >> m1[i][j];
	}
    }

    for (int i = 0; i < 4; i++)
    {
	for (int j = 0; j < 4; j++)
	{
	    cin >> m2[i][j];
	}
    }

    for (int i = 0; i < 4; i++)
    {
	for (int j = 0; j < 4; j++)
	{
		cin >> m3[i][j];
	}
    }



    return 0;
}

