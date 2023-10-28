#include <bits/stdc++.h>

using namespace std;

long long arr[5010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;

    cin >> t;
    memset(arr, 0, sizeof(arr));

    arr[1] = 0;
    arr[2] = 180;

    while(t--)
    {
	int n;

	cin >> n;
    
	if (n == 1){ cout << "0\n"; continue;}

	long long ans = 1;

	for (int i = 0; i < ceil(n/2.0); i++)
	{
	    ans = (ans*10)%(1000000007);
	}
	ans = (ans*9)%1000000007;
	n = n/2;
	ans = (ans*n)%1000000007;

	cout << ans << "\n";

    }

    return 0;
}

