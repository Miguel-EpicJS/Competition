#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;

    cin >> n >> m;

    long long arr[n][m];
    
    int maxArr[m];
    int maxCount[n];
    int avg[n];

    vector<tuple<int, int, int>> res;

    memset(maxArr, 0, sizeof(maxArr));
    memset(maxCount, 0, sizeof(maxCount));
    memset(avg, 0, sizeof(avg));

    for (int i = 0; i < n; i++)
    {
	for (int j = 0; j < m; j++)
	{
	    cin >> arr[i][j];
	    avg[i] += arr[i][j];
	    maxArr[j] = max(maxArr[j], (int)arr[i][j]);
	}
    }

    for (int i = 0; i < n; i++)
    {
	for (int j = 0; j < m; j++)
	{
	    if (arr[i][j] == maxArr[j])
	    {
		maxCount[i]++;
	    }
	}
	res.push_back(make_tuple(maxCount[i], avg[i], i+1));
    }

    sort(res.begin(), res.end());

    cout << get<2>(res[res.size()-1]);

    return 0;
}

