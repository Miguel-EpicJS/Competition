#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int n, m, t;
    cin >> n >> m >> t;

    vector<int> circleAnts;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;

        for (int j = 0; j < t; j++)
        {
            x += y;
            if (x == n+1)
            {
                x = 1;
            }
            if (x == 0)
            {
                x = n;
            }
        }

        circleAnts.push_back(x);
    }

    sort(circleAnts.begin(), circleAnts.end());

    for (auto ant : circleAnts)
    {
        cout << ant << " ";
    }
}
