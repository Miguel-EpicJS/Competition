class Solution {
public:
    int rob(vector<int>& nums) {
        int s = nums.size();
        int robs[s][2];
        robs[0][0] = 0;
        robs[0][1] = nums[0];

        for (int i = 1; i < s; ++i)
        {
            robs[i][0] = max(robs[i-1][0], robs[i-1][1]);
            robs[i][1] = robs[i-1][0] + nums[i];
        }
        return max(robs[s-1][0], robs[s-1][1]);
    }
};
