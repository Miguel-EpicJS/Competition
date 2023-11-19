class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        map<int, int> freq;
        int mn = INT_MAX;
        for (auto i : nums) freq[i]++, mn = min(mn, i);

        int ans = 0;
        vector<int> q;
        for (auto i : freq)
        {
            q.push_back(i.second);
        }
        for (int i = 0; i < q.size(); i++)
        {
            ans += q[i] *i;
        }
        return ans;
    }
};
