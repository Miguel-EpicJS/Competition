#include <bits/stdc++.h>

using namespace std;

int arr[100010];

int n, k, c;

int solve(int i, int ki)
{

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);



    cin >> n >> k >> c;


    arr[0] = 0;

    for (int i = 1; i <= n; i++)
    {
	cin >> arr[i];
	arr[i]+=arr[i-1];
    }


    return 0;
}

