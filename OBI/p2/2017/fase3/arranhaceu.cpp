#include <bits/stdc++.h>

using namespace std;

int bit[100010];

int n, q;
int sum(int k)
{
    int s = 0;
    while (k >= 1)
    {
	s += bit[k];
	k -= k&-k;
    }

    return s;
}

void add(int k, int x)
{
    while(k <= n)
    {
	bit[k] += x;
	k += k&-k;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> q;

    memset(bit, 0, sizeof(bit));

    for (int i = 1; i <= n; i++)
    {
	int x;
	cin >> x;
	add(i, x);
    }

    for (int i = 0; i < q; i++)
    {
	int x, k, p;
	cin >> x;
	if (x == 0)
	{
	    cin >> k >> p;
	    int val = sum(k) - sum(k-1);
	    add(k, p-val);
	}
	else
	{
	    cin >> k;
	    cout << sum(k) << "\n";
	}
    }


    return 0;
}

