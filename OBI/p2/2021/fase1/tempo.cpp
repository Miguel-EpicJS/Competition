#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    char v;
    int c;

    map<int, int> m;
    set<int> r;
    set<int> exist;

    int arr[101][21];

    for (int i = 0; i <= 100; i++)
    {
	m[c] = 0;
    }

    for (int i = 0; i < n; i++)
    {
	cin >> v >> c;

	int temp = 1;

	if (v == 'R'){
	    m[c]++;
	    exist.insert(c);
	}
	else if (v == 'E')
	{
	    m[c]--;
	    exist.insert(c);
	}
	else
	{
	    temp = c;
	}
	
	for (int j = 0; j < 101; j++)
	{
	    if (m.find(j) == m.end() || m[j] <= 0 )
	    {
		arr[j][i] = 0;
		continue;
	    }
	    arr[j][i] = temp;
	}
    }

    for (auto i : exist)
    {
	if (m[i] != 0)
	{
	    cout << i << " -1\n";
	}
	else if (m.find(i) != m.end())
	{
	    int s = accumulate(arr[i], arr[i] + 21, 0);
	    cout << i << " " << s << "\n";
	    cout << "\n\n";
	    for (auto j : arr[i])
	    {
		cout << j << " ";
	    }
	    cout << "\n\n";
	}
    }

    return 0;
}

