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

    long long mod = 1e9+7;

    arr[0]=1;
    arr[1]=1;
    arr[2]=5;
    arr[3]=11;

    if (n <= 3) 
    {
	cout << arr[n] << "\n";
	return 0;
    }

    for(int i = 4; i <= n; i++)
    {
	arr[i] = (arr[i-1] + 4*arr[i-2] + 2*arr[i-3]) % mod;
    }

    cout << arr[n] << "\n";

    return 0;
}
