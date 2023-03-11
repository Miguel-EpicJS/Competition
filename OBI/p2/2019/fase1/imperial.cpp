#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;
    
    vector<int> arr;

    if (n <= 2)
    {
	cout << n << "\n";
	return 0;
    }

    for(int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	arr.push_back(x);
    }

    int mt = 0;
    for(int i = 1; i <= n; i++)
    {
	if (mt == n)
	{
	    break;
	}
	for(int j = 1; j <= n; j++)
	{
	    if (mt == n)
	    {
		break;
	    }
	    if (i == j)
	    {
		continue;
	    }
	    int a[2];
	    a[0] = i;
	    a[1] = j;

	    bool op = true;
	    int t = 0;
	    for(int k = 0; k < n; k++)
	    {
		if (arr[k] == a[op])
		{
		    t++;
		    op = !op;
		}
	    }
	    if (t >= mt)
	    {
		mt = t;
	    }
	}
    }

    cout << mt << "\n";

    return 0;
}

