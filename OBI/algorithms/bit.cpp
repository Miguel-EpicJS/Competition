#include <bits/stdc++.h>

using namespace std;

int arr[100010], bit[100010], n;

void update(int x, int val)
{
    for (; x <= n; x += (x&-x))
    {
	bit[x] += val;
    }
}

int sum(int x)
{
    int s = 0;
    for (; x > 0; x -= (x&-x))
    {
	s += bit[x];
    }
    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n;

    for (int i = 1; i <= n; i++)
    {
	cin >> arr[i];
    }

    int ans = 0;

    for (int i = n; i > 0; i--)
    {
	ans += sum(arr[i]-1);

	update(arr[i], 1);
    }
    
    cout << ans << "\n";

    return 0;
}

