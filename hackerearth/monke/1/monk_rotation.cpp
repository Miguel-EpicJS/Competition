#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, k;

    cin >> n >> k;
    k = k % n;
    vector<int> a, temp;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        temp.push_back(x);
    }
        
    int first;
    for(int i = 0; i < k; i++) 
    { 
        first = temp[n-1]; 
        for(int j = n-1; j>=0; j--)
        {
            temp[j] = temp[j-1];
        }
        temp[0] = first;
    }

    for (auto i : temp)
    {
        cout << i << " ";
    }


}

int main() {
    int num;
    cin >> num;
    while(num--)
    {
        solve();
        cout << "\n";
    }
}
