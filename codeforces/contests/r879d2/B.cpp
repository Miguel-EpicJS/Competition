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
	string l, r;

	cin >> l >> r;

	if (l == r)
	{
	    cout << "0\n";
	    continue;
	}

	if (l.size() > r.size()) swap(l, r);

	int n = r.size();

	int tot = 0;
	
	reverse(l.begin(), l.end());

	while (l.size() != r.size())
	    l.push_back('0');


	reverse(l.begin(), l.end());

	int k = 0;
	while (l[k] == r[k])
	{
	    k++;
	}
	
	tot = (abs((l[k] - '0') - (r[k] - '0'))) + 9 *(n-k-1);

	cout << tot << "\n";

    }

    return 0;
}

