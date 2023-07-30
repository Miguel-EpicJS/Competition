#include <bits/stdc++.h>

using namespace std;

bool pos[1000000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<int> a(n);


    int s = 0;
    for (int i = 0; i < n; i++)
    {
	cin >> a[i];
	s+=a[i];
    }


    pos[0] = true;
    int v = 0;
    for (int i = 0; i < n; i++)
    {
	for (int x = s; x >= 0; x--)
	{
	    if (pos[x])  pos[x+a[i]] = true;
	}
    }

    for (int i = 1; i <= s; i++)
    {
	if (pos[i]) v++;
    }
    cout << v << "\n";
    for (int i = 1; i <= s; i++)
    {
	if (pos[i]) cout << i << " ";
    }
    return 0;
}

