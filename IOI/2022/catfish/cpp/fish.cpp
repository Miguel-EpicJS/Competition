#include "fish.h"

#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long dp[2][2][100011];

long long solve(int n, int i, int i1, int i2, vector<int>& fish)
{
    if (i >= n) return 0;
    if (dp[i1][i2][i] > -1) return dp[i1][i2][i];

    long long dont = 0;
    long long doit = 0;

    if (i > 0 && i1)
    {
	doit -= fish[i];
    }
    if (i > 0 && !i2 && !i1)
    {
	doit += fish[i-1];
    }
    if (i+1 < n)
    {
	doit += fish[i+1];
    }

    dont += solve(n, i+1, 0, i1, fish);
    doit += solve(n, i+1, 1, i1, fish);    

    return dp[i1][i2][i] = max(dont, doit);
}

long long max_weights(int N, int M, vector<int> X, vector<int> Y, vector<int> W) {
   
    vector<int> fish(N, 0);
    
    memset(dp, -1, sizeof(dp));

    for (int i = 0; i < M; i++)
    {
	fish[X[i]] = W[i];
    }
    return solve(N, 0, 0, 0, fish);

}
