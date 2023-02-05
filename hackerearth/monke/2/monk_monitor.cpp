#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;



void solve()
{
	int n, mi = 10000000, ma = 0;
	cin >> n;

	map<unsigned int, unsigned int> cnt;

	while (n--)
	{
		int x;
		cin >> x;

		if (cnt.find(x) == cnt.end())
		{
			cnt[x] = 1;
		}
		else
		{
			cnt[x] += 1;
		}
	}

	for (auto i : cnt)
	{
		if (i.second > ma)
		{
			ma = i.second;
		}
		if (i.second < mi)
		{
			mi = i.second;
		}
	}

	if (ma - mi == 0)
	{
		cout << "-1\n";
	}
	else 
	{
		cout << ma - mi << "\n";
	}

}

int main() {
	int num;
	cin >> num;    
	while(num--)
	{
		solve();
	}
}
