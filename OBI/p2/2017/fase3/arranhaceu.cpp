#include <bits/stdc++.h>

using namespace std;

vector<int> arr(100010), bit(100010, 0);

int n, m;

void update(int i, int val)
{
    for (; i <= n; i+=(i&-i))
	bit[i] += val;
}

int soma (int i)
{
    int ans = 0;
    for (; i> 0; i-=(i&-i))
	ans += bit[i];

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
	update(i+1, arr[i]);
    }


    for (int i = 0; i < m; i++)
    {
	int x, y, z;
	cin >> x >> y;
	if (x == 1)
	{
	    cout << soma(y) << "\n";
	}
	else
	{
	    cin >> z;
	    update(y, z-arr[y-1]);
	    arr[y-1] = z;
	}
    }

    return 0;
}




