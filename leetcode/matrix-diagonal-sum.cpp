class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s = 0;
        int n = mat.size();
        for (int i = 0; i < n; i++)
        {
            s += mat[i][i];
            s += mat[i][n-i-1];
            if (n-i-1 == i)
            {
                s -= mat[i][n-i-1];
            }
        }

        return s;
    }
};
