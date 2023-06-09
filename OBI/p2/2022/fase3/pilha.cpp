// versão iterativa baseado em
// versão recursiva: https://noic.com.br/materiais-informatica/comentario/obi-2022/fase3-p2/


#include <bits/stdc++.h>

using namespace std;

const int inf = 1234567;
const int MAXN = 510;

int dp[MAXN][MAXN];

int n, k;

int arr[MAXN], pref[MAXN];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    for (int j = 0; j <= k; j++)
    {
	for (int i = 0; i <= n; i++)
	{
	    dp[i][j] = inf;
	}
    }

    
    for (int i = 1; i <= n; i++)
	cin >> arr[i];
    
    sort(arr, arr+n+1);
    pref[0] = arr[0];

    for (int i = 1; i <= n; i++)
	pref[i] = arr[i] + pref[i-1];

    for (int i = 0; i <= n; i++)
	dp[0][i] = 0;


    for (int pos = 1; pos <= n; pos++)
    {
	for (int atk = 1; atk <= k; atk++)
	{
	    for (int i = 1; i <= pos; i++)
	    {
		dp[pos][atk] = min(dp[pos-i][atk-1] + i*arr[pos] - pref[pos] + pref[pos-i], dp[pos][atk]);
	    }
	}
    }

    cout << dp[n][k] << "\n";


    return 0;
}

