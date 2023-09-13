#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e4+10, inf = 1e8+10;

int n, k, c, pref[maxn], dp[maxn][maxn];

inline int solve(int i, int j){
    if(i <= 0 and j == k) return 0;
    if(i <= 0 and j != k) return inf;
    if(dp[i][j] != 4*inf) return dp[i][j];

    int tot = solve(i-1, j);

    if(j<k and i>=c) tot = min(tot, solve(i-c, j+1) + pref[i] - pref[max(i-c, 0)]);

    return dp[i][j] = tot;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    cin >> n >> k >> c;

    for(int i=1; i<=n; i++){
        cin >> pref[i];

        pref[i] += pref[i-1];

        for(int j=0; j<=k; j++){
            dp[i][j] = 4*inf;
        }
    }

    cout << pref[n] - solve(n, 0) << endl;

    return 0;
}

