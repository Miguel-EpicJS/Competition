#include <algorithm>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

int main() {
	freopen("shell.in", "r", stdin);

	int n;

	cin >> n;

	vector<int> shell = {0, 1, 2};

	vector<int> counter(3);
	for (int i = 0; i < n; i++) {
		int a, b, g;
		cin >> a >> b >> g;
		a--, b--, g--;

		swap(shell[a], shell[b]);
		counter[shell[g]]++;
	}

	freopen("shell.out", "w", stdout);
	cout << max({counter[0], counter[1], counter[2]}) << "\n";
}
