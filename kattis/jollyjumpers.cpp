#include <bits/stdc++.h>

using namespace std;

void ans( int n )
{


    int arr[n];

    vector<int> diff;
    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
	arr[i] = abs(arr[i]);
	if (i ==0)
	    continue;

	diff.push_back(abs(arr[i-1] - arr[i]));
    }

    int f = diff[0];
    string res = "Jolly\n";
    for (int i = 0; i < diff.size(); i++)
    {
	if (f - diff[i] != i)
	{
	    res = "Not jolly\n";
	    break;
	}
    }

    cout << res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    while (cin >> n)
    {
	ans(n);
    }

    return 0;
}

