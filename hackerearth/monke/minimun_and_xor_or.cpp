#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    int m = 10000001;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                unsigned int val = (arr[i] & arr[j]) ^ ((arr[i] | arr[j]));
                if (val < m)
                {
                    m = val;
                }
            }
        }
    }
    cout << m << "\n";
}

int main() {
    int num;
    cin >> num;    
    while (num--)
    {
        solve();
    }
}
