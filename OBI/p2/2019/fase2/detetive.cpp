#include <bits/stdc++.h>

using namespace std;

vector<int> graph[1010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int e, i, v;

    cin >> e >> i >> v;

    for (int k = 0; k < i; k++)
    {
	int x, y;
	cin >> x >> y;

	graph[x].push_back(y);
    }

    return 0;
}

