class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> freq;
        for (auto i : nums)
        {
            freq[i]=0;
        }
        for (auto i : nums)
        {
            freq[i]++;
        }
        
        vector<int> ans;

        for (auto i : freq)
        {
            if (i.second > nums.size()/3)ans.push_back(i.first);
        }

        return ans;
    }
};
