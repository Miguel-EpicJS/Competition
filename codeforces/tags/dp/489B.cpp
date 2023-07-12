#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x, m;

    cin >> n;

    vector<int> men, women;

    for (int i = 0; i < n; i++)
    {
	cin >> x;
	men.push_back(x);
    }

    cin >> m;

    for (int i = 0; i < m; i++)
    {
	cin >> x;
	women.push_back(x);
    }

    sort(men.begin(), men.end());
    sort(women.begin(), women.end());

    int tot = 0;

    for (int i = 0; i < n; i++)
    {
	for (int j = 0; j < m; j++)
	{
	    if (abs(men[i] - women[j]) <= 1)
	    {
		women[j] = 10000;
		tot++;
		break;
	    }
	}
    }

    cout << tot << "\n";

    return 0;
}

