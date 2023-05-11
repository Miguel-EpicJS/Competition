class Solution {
public:
    int maxUncrossedLines(vector<int>& n1, vector<int>& n2) {
        int n = n1.size()+1;
        int m = n2.size()+1;

        int dp[n][m];
        memset(dp, 0, sizeof(dp));

        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (n1[i-1] == n2[j-1])
                {
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
                else 
                {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        return dp[n-1][m-1];
    }
};
