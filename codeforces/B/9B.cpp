#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, vb, vs;

    cin >> n >> vb >> vs;

    vector<int> dists;

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	dists.push_back(x);
    }

    int dx, dy;

    cin >> dx >> dy;

    if (vs > vb) 
    {
	cout << "2\n";
	return 0;
    }

    int mi = n;
    long long dist = sqrt(1LL*(dx -dists[n-1])*(dx-dists[n-1]) + 1LL*dy*dy);

    for (int i = 1; i < n; i++)
    {
	long long curr = sqrt(1LL*(dx -dists[i])*(dx-dists[i]) + 1LL*dy*dy);

	if (curr < dist)
	{
	    dist = curr;
	    mi = i+1;
	}
    }

    cout << mi << "\n";

    return 0;
}

