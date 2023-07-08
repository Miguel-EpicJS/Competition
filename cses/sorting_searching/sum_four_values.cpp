#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x, y;

    cin >> n >> y;

    vector<int> array(n);

    for (int i = 0; i < n; i++)
    {
	cin >> array[i];
    }

    if (n < 4)
    {
	cout << "IMPOSSIBLE\n";
	return 0;
    }

    vector<vector<int>> doubles;

    for (int i = 0; i < n; i++)
    {
	for (int j = i+1; j < n; j++)
	{
	    doubles.push_back({array[i] + array[j], i+1, j+1});
	}
    }

    sort(doubles.begin(), doubles.end());

    int i = 0, j = doubles.size()-1;

    while(i != j)
    {
	if (doubles[i][0] + doubles[j][0] == y)
	{
	    if (doubles[i][1] == doubles[j][1] || doubles[i][1] == doubles[j][2] || doubles[i][2] == doubles[j][2] || doubles[i][1] == doubles[j][2])
	    {
		break;
	    }
	    cout << doubles[i][1] << " " << doubles[i][2] << " " << doubles[j][1] << " " << doubles[j][2] << "\n";
	    return 0;
	}
	
	if (doubles[i][0] + doubles[j][0] > y) j--;
	else i++;
    }

    cout << "IMPOSSIBLE\n";

    return 0;
}
