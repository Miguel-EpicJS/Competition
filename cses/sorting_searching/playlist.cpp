#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    map<int, bool> plays, xn;

    int tot = 0;
    int mTot = 1;

    vector<int> m;

    while(n--)
    {
	int x;
	cin >> x;
	m.push_back(x);
	plays[x] = false;
    }

    int i, j;

    for (i = 0, j = 0; i < m.size(); i++)
    {
	if (plays[m[i]] == false)
	{
	    plays[m[i]] = true;
	}
	else
	{
	    mTot = max(mTot, (i-j));
	    while(j < i)
	    {
		if (m[i] != m[j])
		{
		    plays[m[j]] = false;
		}
		else
		{
		    j++;
		    break;
		}
		j++;
	    }
	}
    }

    mTot = max(mTot, (i-j));

    cout << mTot << "\n";

    return 0;
}

