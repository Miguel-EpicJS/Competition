#include<bits/stdc++.h>
using namespace std;

map<long long, long long> cache;

long long answer (long long n) {
    // Write your code here
    int mod = 1000000009;

    if (cache.find(n) != cache.end())
    {
        return cache[n];
    }

    if (n == 0)
    {
        cache[n] = 1;
        return 1;
    }
    if (n == 1)
    {
        cache[n] = 10;
        return 10;
    }

    int temp1 = answer(n/2);
    int temp2 = answer(n/2-1);

    if (n % 2 == 0)
    {
        cache[n] = (temp1*temp1 - temp2*temp2) % mod;
    }
    else
    {
        int temp3 = answer(n/2+1);
        cache[n] = (temp1 * (temp2-temp3)) % mod;
    }

    return cache[n];

}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        long long Num;
        cin >> Num;

        long long out_;
        out_ = answer(Num);
        cout << out_;
        cout << "\n";
    }
}
