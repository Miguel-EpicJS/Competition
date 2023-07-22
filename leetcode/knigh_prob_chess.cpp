class Solution {
public:
    double knightProbability(int n, int k, int row, int column) {
        vector dp(k + 1, vector (n, vector<double>(n, 0.0)));
        int dir[8][2] = {{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};

        dp[0][row][column] = 1;

        for (int i = 1; i <= k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int w = 0; w < n; w++)
                {
                    for(auto z : dir)
                    {
                        if (j-z[0] >= 0 && j-z[0] < n && w-z[1] >= 0 && w-z[1] < n)
                        {
                            dp[i][j][w] += dp[i-1][j-z[0]][w-z[1]]/8.0;
                        }
                    }
                }
            }
        }

        double ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ans += dp[k][i][j];
            }
        }

        return ans;
    }
};
