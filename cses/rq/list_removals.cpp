#include <bits/stdc++.h>

using namespace std;

long long arr[200100], bit[200100], n;

void upd(int pos)
{
    for (; pos <= n; pos+=(pos&-pos))
    {
	bit[pos]++;
    }
}

long long sum(int pos)
{
    long long s = 0;

    for (; pos > 0; pos-=(pos&-pos))
    {
	s += bit[pos];
    }
    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    memset(bit, 0, sizeof(0));

    for (int i = 1; i <= n; i++)
    {
	cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
	int x;
	cin >> x;
	cout << arr[x+sum(x)] << " ";
	upd(x);
    }

    return 0;
}

