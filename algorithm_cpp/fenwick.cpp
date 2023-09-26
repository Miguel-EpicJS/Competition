#include <bits/stdc++.h>

using namespace std;

int bit[100000], arr[100000];

int n, q;

void updt(int x, int val)
{
    for (; x <= n; x+=(x&-x))
    {
	bit[x] += val;
    }
}

int sum(int x)
{
    int val = 0;

    for (; x > 0; x -= (x&-x))
    {
	val += bit[x];
    }

    return val;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(bit, 0, sizeof(bit));

    cin >> n >> q;

    for (int i = 1; i <= n; i++)
    {
	int x;
	cin >> x;
    
	updt(i, x);
    }

    for (int i = 0; i < q; i++)
    {
	int x;

	cin >> x;

	if (x == 1)
	{
	    int y;
	    cin >> y;
	    cout << sum(y) << "\n";
	}
	else
	{
	    int y, z;

	    cin >> y >> z;

	    updt(y, z-(sum(y)-sum(y-1)));
	}
    }

    return 0;
}

