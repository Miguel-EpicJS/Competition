#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    long long arr[10010];

    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 5;
    arr[3] = 11;
    
    for (int i = 4; i <= n; i++)
    {
	arr[i] = (arr[i-1] + arr[i-2]*4 + arr[i-3]*2) % (int)(1e9+7);
    }

    cout << arr[n] << "\n";

    return 0;
}

