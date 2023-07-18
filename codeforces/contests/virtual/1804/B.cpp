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
	int n, k, d, w;

	cin >> n >> k >> d >> w;

	vector<int> people(n);

	for (int i = 0; i < n; i++)
	{
	    cin >> people[i];
	}
	sort(people.begin(), people.end());

	int tot = 1;
	int vac = k;
	int last = people[0];
	int op = people[0];

	for (int i = 0; i < n; i++)
	{
	    if (people[i] - op <= d && vac > 0)
	    {
		vac--;
	    }
	    else if (vac > 0 && (people[i] - (op + w) <= d))
	    {
		vac--;
	    }
	    else
	    {
		tot++;
		vac = k-1;
		op = people[i];
	    }
	}

	cout << tot << "\n";
    }

    return 0;
}

