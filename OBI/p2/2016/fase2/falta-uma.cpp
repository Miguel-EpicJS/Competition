#include <bits/stdc++.h>

using namespace std;

int fat(int x)
{
    int a = 1;
    do
    {
	a *= x;
	x--;
    } while(x > 0);
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    unordered_map<string, bool> perms;

    string s = "";

    for (int i = 1; i <= n; i++)
    {
	s += ('0' +i);
    }

    int k = fat(n);

    for (int i = 0; i < k-1; i++)
    {
	string x;
	for (int i = 0; i < n; i++)
	{
	    char z;
	    cin >> z;
	    x+=z;
	}
	perms[x] = true;
    }

    do
    {
	if (perms[s] == false)
	{
	    break;
	}
    }while(next_permutation(s.begin(), s.end()));
    
    for (auto i : s)
    {
	cout << i << " ";
    }

    return 0;

}

