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
	int a, n, k;

	cin >> n >> k;

	vector<int> arr;

	int zeros = 0;
	for (int i = 0; i < n; i++)
	{
	    cin >> a;
	    arr.push_back(a);
	    if (a==0) zeros++;
	}

	if (zeros == arr.size())
	{
	    cout << "0\n";
	    continue;
	}
	
	int j = 0;
	
	int count = 0;
	while((1<<j) <= k)
	{
	    zeros = 0;
	    for (auto &i : arr)
	    {
		i = (i&(1<<j));
		if (i == 0) zeros++;
	    }
	    count++;
		j++;
	    if (zeros == arr.size()) break;
	}

	if (zeros != arr.size())
	{
	    zeros = 0;
	    for (auto &i : arr)
	    {
		i = (i&(1));
		if (i == 0) zeros++;
	    }
	    count++;
	    if (zeros != arr.size())
	    {
		cout << "-1\n";
	    }
	    else
	    {
		cout << count << "\n";
	    }
	}
	else
	{
	    cout << count << "\n";
	}


    }

    return 0;
}

