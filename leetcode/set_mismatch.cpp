class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> ans;
        vector<bool> okay(10010, false);
        okay[nums[0]]=1;
        for (int i = 1; i < nums.size(); i++)
        {
            okay[nums[i]] = true;
            if(nums[i] == nums[i-1])
            {
                ans.push_back(nums[i-1]);
            }
        }

        for (int i = 1; i <= nums.size()+1; i++)
        {
            if (okay[i] == false)
            {
                ans.push_back(i);
                break;
            }
        }

        return ans;

    }
};
