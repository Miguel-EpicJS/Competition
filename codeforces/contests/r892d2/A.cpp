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
	int x, y, z, a, b, c, n, m, k;

	cin >> n;

	vector<int> arr1, ab, ac;
	set<int> ss;
	for (int i = 0; i < n; i++)
	{
	    cin >> x;
	    arr1.push_back(x);
	    ss.insert(x);
	}

	if (ss.size() == 1)
	{
	    cout << "-1\n";
	}
	else
	{
	    sort(arr1.begin(), arr1.end());
	    int i = 0;
	    int l = arr1[0];
	    while(arr1[i] == l)
	    {
		ab.push_back(l);
		i++;
	    }
	    while(i < arr1.size())
	    {
		ac.push_back(arr1[i]);
		i++;
	    }

	    cout << ab.size() << " " << ac.size() << "\n";
	    for (auto was : ab)
	    {
		cout << was << " ";
	    }
	    cout << "\n";
	    for (auto was : ac)
	    {
		cout << was << " ";
	    }
	    cout << "\n";


	}

    }

    return 0;
}

