#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    set<int> lights = {0, n};
    multiset<int> elem = {n};

    while(m--)
    {
	int x;
	cin >> x;

	auto i1 = lights.upper_bound(x);
	auto i2 = i1; i2--;

	elem.erase(elem.find(*i1 - *i2));
	elem.insert(x - *i2);
	elem.insert(*i1 - x);

	lights.insert(x);

	auto a = (elem.end());
	a--;
	cout << *(a) << " ";

    }


    return 0;
}

