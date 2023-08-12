#include <bits/stdc++.h>

using namespace std;


long long calc(vector<long long> &arr)
{
    long long ans = 0;
    long long m = 0;
    for (int i = 0; i < arr.size(); i++)
    {
	ans += (i+1) * arr[i];
	m = max(m, (i+1) * arr[i]);
    }

    return ans-m;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while(t--)
    {
	int n;

	cin >> n;

	vector<long long> arr(n, 0);
	long long ans = 0;
	vector<long long> temp;
	for (int j = 1; j <= n; j++)
	{
	    temp.push_back(j);
	}
	int a =0;
	do
	{
	    for (auto k : temp) cout << k << " ";
	    a = calc(temp);
	    ans = max(ans, calc(temp));
	    cout << "| " << a << "\n";

	} while (next_permutation(temp.begin(), temp.end()));

	cout << "\n\n" << ans << "\n";

    }

    return 0;
}

