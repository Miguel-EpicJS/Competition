#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; 

    cin >> n;

    long long mat[1000][1000];

    long long last = 0;
    long long temp = -1;
    bool ok = true;
    
    for (int i = 0; i < n; i++)
    {
	last = 0;
	for (int j = 0; j < n; j++)
	{
	    cin >> mat[i][j];
	    last += mat[i][j];	    
	}
	if (temp != -1 && last != temp){ ok = false; break;}
	temp = last;
    }

    if (!ok)
    {
	cout << "0\n";
	return 0;
    }
    for (int i = 0; i < n; i++)
    {
	temp = 0;
	for (int j = 0; j < n; j++)
	{
	    temp += mat[j][i];
	}
	if (temp != last)
	{
	    ok = false;
	    cout << "0\n";
	    return 0;
	}
    }
    
    temp = 0;
    for (int i = 0; i < n; i++)
    {
	temp += mat[i][i];
    }
    if (temp != last) ok = false;
    temp = 0;
    for (int i = 0; i < n; i++)
    {
	temp += mat[i][n-i-1];
    }

    if (temp != last) ok = false;

    if (ok) cout << temp << "\n";
    else cout << "0\n";

    return 0;
}

