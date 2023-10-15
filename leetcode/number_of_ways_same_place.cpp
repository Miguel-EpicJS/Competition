class Solution {
public:
    map<pair<int, int>, int> dp;
    int solve(int i, int j, int n)
    {
        if(i == 0 && j == 0) return 1;
        if(i == 0 && j > 0) return 0;
        if(j < 0 || j >= n) return 0;
        if (dp.find({j,i}) != dp.end()) return dp[{j,i}];


        return dp[{j,i}] = ((long long)solve(i-1, j, n) + (long long)solve(i-1, j+1, n) + (long long)solve(i-1, j-1, n)) % (1000000007);        

    }

    int numWays(int steps, int arrLen) {
        return solve(steps, 0, arrLen);
    }
};
