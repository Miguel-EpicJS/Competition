class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> col(101, 0), row(101, 0);
        
        int n = mat.size(), m = mat[0].size();
        
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                col[i] += mat[j][i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                row[i] += mat[i][j];
            }
        }
        
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 1 && col[j] == 1 && row[i] == 1) ans++;
            }
        }

        return ans;

    }
};
