#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;

	cin >> n;

	map<int, int> arr;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr[x]++;
	}

	int m;

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		int s = 0;
		for (auto v : arr)
		{
		    if (v.second >= x && v.second <= y)
		    {
			s += v.second * v.first;
		    }
		}
		cout << s << "\n";
	}

}
