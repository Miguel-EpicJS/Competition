#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> arr;

    int x, y, z;

    cin >> x >> y >> z;

    arr.push_back(x);
    arr.push_back(y);
    arr.push_back(z);

    sort(arr.begin(), arr.end());

    if (arr[0] + arr[1] > arr[2])
    {
	cout << "S\n";
    }
    else
    {
	cout << "N\n";
    }

    return 0;
}

