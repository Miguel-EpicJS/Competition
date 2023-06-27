#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<string> b = {};

    string s1 = "", s2 = "";

    for (int i = 1; i <= n; i++)
    {
	s1 += '0';
    }

    s2 = s1;
    s2[n-1] = '1';
    b.push_back(s1);
    b.push_back(s2);

    int p = n-2;
  
    for (int k = 0; k < n-1; k++)
    {

	int s = b.size();

	for (int i = s-1; i >= 0; i--)
	{
	    b.push_back(b[i]);
	    b.back()[p] = '1';
	}
	p--;
    }
    for (auto i : b)
    {
	cout << i << "\n";
    }

    return 0;
}

