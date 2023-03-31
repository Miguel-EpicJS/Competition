#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<int> z, v;

    int tz = 0, tv = 0;

    while (n--)
    {
	int x;
	cin >> x;
	if (x % 2 == 0)
	{
	    tz += x;
	    z.push_back(x);
	}
	else
	{
	    tv += x;
	    v.push_back(x);
	}
    }

    sort(z.begin(), z.end());
    sort(v.begin(), v.end());

    for (auto i : z)
    {
	cout << i << " ";
    }
    cout << tz << " ";
    
    for (auto i : v)
    {
	cout << i << " ";
    }
    cout << tv << "\n";


    return 0;
}

