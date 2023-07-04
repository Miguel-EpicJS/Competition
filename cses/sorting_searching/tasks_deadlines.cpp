#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<vector<long long>> tasks;

    for (int i = 0; i < n; i++)
    {
	long long x, y;
	cin >> x >> y;
	
	tasks.push_back({x, y});
    }

    sort(tasks.begin(), tasks.end());

    long long times = 0;
    long long point = 0;

    for (auto i : tasks)
    {
	times += i[0];
	point += i[1] - times;
    }

    cout << point << "\n";

    return 0;
}

