#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin >> s;

    if (s.size() <= 20)
    {
	cout << "1 " << s.size() <<"\n";
	cout << s;
	return 0;
    }

    int minRow = ceil(s.size() / 20.0);

    int minCol = 999;

    for (int i = 20; i > 0; i--)
    {
	if (ceil(s.size() / (i*1.0)) > minRow) break;
	minCol = (minCol < (i - (s.size() % i))) ? minCol : i;
    }

    cout << minRow << " " << minCol;

    int ast = minCol - (s.size() % minCol);
    if (ast == minCol) ast = 0;
    int mod = 0;

    for (int i = 0; i < s.size(); i++)
    {
	if ((i+mod) % minCol == 0) cout << "\n";
    
	if (ast > 0 && (i+mod)/minCol == mod)
	{
	    cout << '*';
	    ast--;
	    mod++;
	}

	cout << s[i];
    }

    cout << "\n";

    return 0;
}

