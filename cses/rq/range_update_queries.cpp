#include <bits/stdc++.h>

using namespace std;

long long diff[200001], arr[200001];
long long tree[800001]

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, q;

    cin >> n >> q;
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
	cin >> arr[i];
	diff[i] = arr[i] - arr[i-1];
    }



    return 0;
}

