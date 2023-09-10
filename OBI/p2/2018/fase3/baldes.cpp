#include <bits/stdc++.h>

using namespace std;


int n, m;

int t[200000];

void build()
{
    for (int i = n - 1; i > 0; --i) t[i] = t[i<<1] + t[i<<i|i];
}

void upd(int p, int val)
{
    for (t[p+=n] = val; p > 1; p >>= 1) t[p>>1] = t[p] + t[p^1];
}

int query(int l, int r)
{
    int res = 0;
    for (l += n, r+= n; l < r; l >>= 1, r >>= 1)
    {
	if (l&1) res += t[l++];
	if (r&1) res += t[--r];
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {

    }

    return 0;
}

