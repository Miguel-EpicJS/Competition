#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while(t--)
    {
	long long n, ss[2], x;

	cin >> n;

	vector<long long> arr;

	ss[0] = 0;
	ss[1] = 0;

	for (int i = 0; i < n; i++)
	{
	    cin >> x;

	    ss[i%2] += x;

	    arr.push_back(x);
	}

	int i = 0, j = n;

	bool ok = false;

	while(i < j)
	{
	    if (ss[0] == ss[1]) 
	    {
		cout << "YES\n";
		ok = true;
		break;
	    }

	    if (ss[0] > ss[1] && i%2 != j%2)
	    {
		if (i%2 == 0)
		{
		    ss[0] -= arr[i];
		    i++;
		}
		else
		{
		    ss[0] -= arr[j];
		    j--;
		}
	    }
	    if (ss[0] < ss[1] && i%2 != j%2)
	    {
		if (i%2 == 1)
		{
		    ss[1] -= arr[i];
		    i++;
		}
		else
		{
		    ss[1] -= arr[j];
		    j--;
		}
	    }

	    if (ss[0] > ss[1] && i%2 == j%2)
	    {
		if (i%2 == 0)
		{
		    if (abs(ss[1] - (ss[0] - arr[i])) < abs(ss[1] - (ss[0] - arr[i])))
		    ss[0] -= arr[i];
		    i++;
		}
		else
		{
		    ss[0] -= arr[j];
		    j--;
		}
	    }

	    if (ss[0] < ss[1] && i%2 == j%2)
	    {
		if (i%2 == 1)
		{
		    ss[1] -= arr[i];
		    i++;
		}
		else
		{
		    ss[1] -= arr[j];
		    j--;
		}
	    }
	}
	

    }

    return 0;
}

