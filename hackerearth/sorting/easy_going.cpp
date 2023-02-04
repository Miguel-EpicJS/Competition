#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve()
{

    int n, m;

    cin >> n >> m;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    cout <<  (arr[n-1] + m) - (arr[0] + m) << "\n";
}

int main() {
    int num;
    cin >> num;   
    while(num--)
    {
        solve();
    }
}
