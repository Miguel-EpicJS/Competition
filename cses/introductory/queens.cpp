#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char m[8][8];

    vector<int> pos = {0,1,2,3,4,5,6,7};

    int board[8][8];
    

    for (int i = 0; i < 8; i++)
    {
	for (int j = 0; j < 8; j++)
	{
	    cin >> m[i][j];
	}
    }

    int tot = 0;

    do {
	memset(board, 0, sizeof(board));
    
	for (int i = 0; i < 8; i++)
	{
	    board[i][pos[i]] = 10;
	}
	bool ok = false;
	for (int i = 0; i < 8; i++)
	{
	    if (m[i][pos[i]] == '*') ok = true;

	    int k = 1;
	    while(i+k < 8 && pos[i] + k < 8)
	    {
		if (board[i+k][pos[i]+k] == 10) ok = true;
		k++;
	    }
	    k = -1;
	    int l = 1;
	    while(i+l < 8 && pos[i] + k >= 0)
	    {
		if (board[i+l][pos[i]+k] == 10) ok = true;
		k--;
		l++;
	    }
	}

	if (ok) continue;

	tot++;


	
    } while(next_permutation(pos.begin(), pos.end()));

    cout << tot << "\n";

    return 0;
}

