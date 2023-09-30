#include <bits/stdc++.h>

using namespace std;

int n;
int v[100000];

int l_busca(int x)
{
    int ini = 1, fim = n;
    int ans = -1;

    while(ini <= fim)
    {
	int mid = (ini+fim)/2;
	if (v[mid] >= x)
	{
	    ans = v[mid];
	    fim = mid-1;
	}
	else
	{
	    ini = mid-1;
	}
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    return 0;
}

