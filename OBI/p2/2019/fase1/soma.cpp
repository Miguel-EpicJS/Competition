#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;

    cin >> n >> m;

    vector<int> arr(n+1);
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
	cin >> arr[i];

	arr[i] += arr[i-1];
    }



    return 0;
}

