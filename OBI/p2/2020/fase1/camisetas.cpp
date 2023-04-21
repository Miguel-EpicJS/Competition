#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int t[3] = {0, 0, 0};

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	
	t[x]++;
    }

    int z, w;

    cin >> z >> w;

    string r = "S\n";

    if (z < t[1] || w < t[2])
    {
	r = "N\n";
    }

    cout << r;

    return 0;
}

