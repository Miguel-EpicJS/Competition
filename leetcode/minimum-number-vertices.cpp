class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> present(n, false);
        for (auto i : edges)
        {
            present[i[1]] = true;
        }
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (present[i] == false)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
