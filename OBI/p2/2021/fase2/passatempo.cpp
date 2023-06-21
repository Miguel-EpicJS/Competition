#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string mat[110][110];

    int nl[110], nc[110];

    map<string, int> m;
    set<string> s;

    int l, c;

    cin >> l >> c;

    for (int i = 1; i <= l; i++)
    {
	for (int j = 1; j <= c; j++)
	{
	    cin >> mat[i][j];
	    s.insert(mat[i][j]);
	}
	cin >> nl[i];
    }

    for (int i = 1; i <= c; i++)
	cin >> nc[i];

    while(m.size() < s.size())
    {
	for (int i = 1; i <= l; i++)
	{
	    int q = 0, sum = 0;
	    string aux;
	    bool ok = true;


	    for (int j = 1; j <= c; j++)
	    {
		if (m.find(mat[i][j]) == m.end())
		{
		    if (q == 0)
		    {
			q++;
			aux = mat[i][j];
		    }
		    else if (aux == mat[i][j]) q++;
		    else 
		    {
			ok = false;
			break;
		    }
		}
		else if (m.find(mat[i][j]) != m.end())
		    sum += m[mat[i][j]];
	    }
	    if (ok && q) m [aux] = (nl[i]-sum)/q;
	}

	for (int i = 1; i <= c; i++)
	{
	    int q = 0, sum = 0;
	    string aux;
	    bool ok = true;


	    for (int j = 1; j <= l; j++)
	    {
		if (m.find(mat[j][i]) == m.end())
		{
		    if (q == 0)
		    {
			q++;
			aux = mat[j][i];
		    }
		    else if (aux == mat[j][i]) q++;
		    else 
		    {
			ok = false;
			break;
		    }
		}
		else if (m.find(mat[j][i]) != m.end())
		    sum += m[mat[j][i]];
	    }
	    if (ok && q) m [aux] = (nc[i]-sum)/q;
	}
    }

    for (auto i : m)
    {
	cout << i.first << " " << i.second << "\n";
    }

    return 0;
}

