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
	int n, m;
	cin >> n >> m;

	vector<int> a1, a2;

	for (int i = 0; i < n; i++)
	{
	    int x;
	    cin >> x;
	    a1.push_back(x);
	}
	
	for (int i = 0; i < m; i++)
	{
	    int x;
	    cin >> x;
	    a2.push_back(x);
	}

	sort(a2.rbegin(), a2.rend());

	int a = a2[0];
	int i = 0;
	for (; i < n; i++)
	{
	    if (a1[i] > a) cout << a1[i] << " ";
	    else {break;}
	}   
	for (auto i : a2) cout << i << " ";

	for (; i < n; i++) cout << a1[i] << " ";

	cout << "\n";
    }

    return 0;
}

