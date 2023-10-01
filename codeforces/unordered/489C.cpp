#include <bits/stdc++.h>

using namespace std;

int m, s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> m >> s;

    if (m == 1 && s == 0)
    {
	cout << "0 0\n";
    }
    else if (s > m*9 || s == 0)
    {
	cout << "-1 -1\n";
    }
    else
    {
	string s2 = "", s1 = "";
	int ms2 = s;

	while (ms2 > 0)
	{
	    if (ms2 >= 9) ms2 -= 9, s2 += '9';
	    else s2 += (ms2 + '0'), ms2 = 0;
	}

	s1 = s2;

    	sort(s1.begin(), s1.end());

	

	cout << s1 << " " << s2 << "\n";
    }

    return 0;
}

