class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr;

        int l = -1;
        int u = -1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target && l == -1)
            {
                l = i;
                u = i;
            }
            else if (nums[i] == target) u = i;
        }

        arr.push_back(l);
        arr.push_back(u);

        return arr;
    }
};
