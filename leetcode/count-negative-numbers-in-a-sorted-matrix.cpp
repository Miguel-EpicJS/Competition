class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        // simple O(n^2)

        int count = 0;
        for (auto i : grid)
        {
            for (auto j : i)
            {
                if (j < 0) count++;
            }
        }

        return count;
    }
};
