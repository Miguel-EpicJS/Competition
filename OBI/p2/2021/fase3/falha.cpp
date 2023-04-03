#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    string senhas[n];

    for (int i = 0; i < n; i++)
    {
	cin >> senhas[i];
    }

    int res = 0;

    for (int i = 0; i < n; i++)
    {
	for (int j = 0; j < n; j++)
	{
	    if (i == j || senhas[i].size() > senhas[j].size())
		continue;

	    if (senhas[i].find(senhas[j]) != string::npos)
	    {
		res++;
	    }
	}
    }

    cout << res << "\n";

    return 0;
}

