#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    set<int> arr;

    for (int i = 0; i < m; i++)
    {
	int x;
	cin >> x;
	arr.insert(x);
    }

    for (int i = 1; i <= n; i++)
    {
	cout << *(arr.begin())-i << "\n";
	if (*(arr.begin())-i == 0)
	{
	    arr.erase(i);
	}
    }

    return 0;
}

