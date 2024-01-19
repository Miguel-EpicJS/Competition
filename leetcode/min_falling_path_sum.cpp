class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& m) {
        int n = m.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0) continue;

                if (j == 0) m[i][j] += min(m[i-1][j], m[i-1][j+1]);
                else if (j == n-1) m[i][j] += min(m[i-1][j], m[i-1][j-1]);
                else m[i][j] += min(m[i-1][j], min(m[i-1][j-1], m[i-1][j+1]));
            }
        }

        return *min_element(m[n-1].begin(), m[n-1].end());
    }
};
