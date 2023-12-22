#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);


    int n;

    cin >> n;

    vector<array<long long, 3>> vals;

    long long mod1 = 0, mod2 = 0, crr1 = 0, crr2 = INT_MAX;

    long long org1 = 0, org2 = 0;

    int w = 0;

    for (int i = 0; i < n; i++)
    {
	string x;
	long long y, z, k;
	cin >> x >> y >> z;

	if (x == "on") k = 1;
	else if (x == "none") k = 0;
	else k = -1;
	
	if (k == 0 && w==0) w++;
	if (k != 0 && w==1)
	{
	    org1 -= mod1;
	    org2 -= mod2;

	    org1 += crr1;
	    org2 += crr2;
	    w++;
	}
	
	if (k == 0)
	{
	    crr1 = max(crr1, y);
	    crr2 = min(crr2, z);
	}
	
	if (k == -1)
	{
	    crr2 -= y;
	    crr1 -= z;

	    mod1 -= z;
	    mod2 -= y;
	}
	
	if (k == 1)
	{
	    crr2 += y;
	    crr1 += z;

	    mod1 += z;
	    mod2 += y;
	}

	vals.push_back({k, y, z});
    }



    cout << org1 << " " << org2 << "\n"; 
    cout << crr1 << " " << crr2 << "\n"; 

            

    return 0;
}

