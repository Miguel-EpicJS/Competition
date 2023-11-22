class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<array<int, 4>> anss;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums[i].size(); j++)
            {
                anss.push_back({j+i, j, i, nums[i][j]});
            }
        }

        sort(anss.begin(), anss.end());

        vector<int> ans;
        for(auto i : anss)
        {
            ans.push_back(i[3]);
        }

        return ans;

    }
};
