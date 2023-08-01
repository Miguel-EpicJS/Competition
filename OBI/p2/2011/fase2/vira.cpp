#include <bits/stdc++.h>

using namespace std;

int n;


int solve(string &arr, int b)
{
    if (b == 0) return 1;
	
    int tot = 0;
    for (int i = 0; i < n; i++)
    {
	if (arr[i] == '1')
	{
	    int c = b;
	    string temp = arr;
	    if (i > 0 && temp[i-1] != '2')
	    {
		if (temp[i-1] == '1')
		{
		    c--;
		    temp[i-1] = '0';
		}
		else
		{
		    c++;
		    temp[i-1] = '1';
		}
	    }
	    if (i < n-1 && temp[i+1] != '2')
	    {
		if (temp[i+1] == '1')
		{
		    c--;
		    temp[i+1] = '0';
		}
		else
		{
		    c++;
		    temp[i+1] = '1';
		}
	    }
	    c--;
	    temp[i] = '2';
	    tot = (tot + solve(temp, c)) % 10007;
	}
    }

    return tot;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n;

    string arr;

    int b = 0;

    for (int i = 0; i < n; i++)
    {
	char x;
	cin >> x;
	if (x == 'B') arr.push_back('0');
	else arr.push_back('1'), b++;
    }
    cout << solve(arr, b) << "\n";

    return 0;
}

