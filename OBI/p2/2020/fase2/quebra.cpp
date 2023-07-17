#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<int> l1(n), l2(n);
    
    int x;

    cin >> x;

    for (int i = 0; i < x; i++)
    {
	cin >> l1[i];
    }
    cin >> x;
    for (int i = 0; i < x; i++)
    {
	cin >> l2[i];
    }

     

    return 0;
}

