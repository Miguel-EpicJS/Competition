class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> tri;
        for (int i = 0; i < n; i++)
        {
            vector<int> a;
            for (int j = 0; j < i+1; j++)
            {
                a.push_back(1);
            }
            tri.push_back(a);
        }

        for (int i = 2; i < n; i++)
        {
            int s = tri[i].size()-1;
            for (int j = 1; j < s; j++)
            {
                tri[i][j] = tri[i-1][j] + tri[i-1][j-1];
            }
        }

        return tri;
    }
};
