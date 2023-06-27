#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> abc(27, 0);

    string s;

    cin >> s;

    for (auto i : s)
    {
	abc[i-'A']++;
    }

    int odd = 0;

    deque<char> ans;

    for (int i = 0; i < abc.size(); i++)
    {
	if (abc[i] % 2 == 1)
	{
	    odd++;
	    for (int j = 0; j < abc[i]; j++)
		ans.push_back(i+'A');
	}
    }

    if (odd > 1)
    {
	cout << "NO SOLUTION\n";
    }
    else
    {
	char x;
	for (int i = 0; i < abc.size(); i++)
	{
	    if (abc[i] % 2 == 1 || abc[i] == 0) continue;

	    for (int j = 0; j < abc[i]/2; j++)
	    {
		x =i+'A';
		ans.push_back(x);
		ans.push_front(x);
	    }
	}
	for (auto i : ans)
	    cout << i << "";
    }

    return 0;
}

