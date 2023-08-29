#include<bits/stdc++.h>
#define int long long
#define fr first
#define sc second
#define pi pair <int, int>
#define pb push_back
#define ms(v) memset(v, -1, sizeof v)
#define srt(v) sort(v.begin(), v.end())
#define rvs(v) reverse(v.begin(), v.end())
#define st(v, comp) sort(v.begin(), v.end(), comp)
#define N 510
#define INF 1250000

using namespace std;

int n;
int v[N];
int dp[N][N];
int k;
int pref[N];

int solve(int pos, int atk){
    if(pos == 0) return dp[pos][atk] = 0;
    if(atk == 0) return dp[pos][atk] = INF;
    if(pos < atk) return dp[pos][atk] = INF;
    if(dp[pos][atk] != -1) return dp[pos][atk];
    dp[pos][atk] = INF;

    for(int i = 1;i <= pos;i++){
        dp[pos][atk] = min(solve(pos-i, atk-1) + i*v[pos] - pref[pos] + pref[pos-i], dp[pos][atk]);
    }

    return dp[pos][atk];
}

int32_t main(){
    cin >> n >> k;

    for(int i = 1;i <= n;i++){
        cin >> v[i];
    }

    sort(v, v+n+1);

    pref[0] = v[0];
    ms(dp);

    for(int i = 1;i <= n;i++){
        pref[i] = pref[i-1] + v[i];
    }

    solve(n, k);

    cout << dp[n][k] << "\n";

    return 0;
}
//https://noic.com.br/materiais-informatica/comentario/obi-2022/fase3-p2/
