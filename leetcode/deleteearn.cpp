class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int, int> fq;
        int m = *max_element(nums.begin(), nums.end());
        for (int i = 0; i < m; i++)
        {
            fq[i] = 0;
        }
        for (auto i : nums)
        {
            fq[i]++;
        }
        vector<int> arr;
        for (auto i : fq)
        {
            arr.push_back(i.first * i.second);
        }
        int n = arr.size();

        int dp[n][2];

        dp[0][0] = 0;
        dp[0][1] = arr[0];

        for (int i = 1; i < n; i++)
        {
            dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
            dp[i][1] = dp[i-1][0] + arr[i];
        }

        return max(dp[n-1][0], dp[n-1][1]);
    }
};
