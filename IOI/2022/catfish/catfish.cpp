#include <vector>
#include <ios>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    int x, y, z;

    cin >> n >> m;

    vector<int> fishx, fishy, weight;

    long long tot =0;

    for (int i = 0; i < m; i++)
    {
	cin >> x >> y >> z;
	fishx.push_back(x);
	fishy.push_back(y);
	weight.push_back(z);
	tot += z;
    }

    cout << tot << "\n";

    return 0;
}

