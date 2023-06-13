class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string, int> ans;

        int n = grid.size();
        int out = 0;

        for (int i = 0; i < n; i++)
        {
            string a = "";
            for (int j = 0; j < n; j++)
            {
                a += to_string(grid[i][j]);
                a += '.';
            }
            cout << a << " ";
            if (ans.find(a) == ans.end())
                ans[a] = 1;
            else
                ans[a]++;
        }

        for (int j = 0; j < n; j++)
        {
            string a = "";
            for (int i = 0; i < n; i++)
            {
                a += to_string(grid[i][j]);
                a += '.';
            }
            if (ans[a] >= 1) out+=ans[a];
        }
        return out;
    }
};
