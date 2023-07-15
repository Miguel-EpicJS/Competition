class Solution {
public:

    int solve(vector<vector<int>>& events, vector<int>& starts, vector<int>& ends, int k, int i, vector<vector<int>>& dp)
    {
        if (k == 0) return 0;
        if (i >= events.size()) return 0;
        if (dp[i][k] > -1) return dp[i][k];


        int dont = solve(events, starts, ends, k, i+1, dp);
        
        int d = upper_bound(starts.begin(), starts.end(), ends[i]) - starts.begin();

        int take = events[i][2] + solve(events, starts, ends, k-1, d, dp);

        return dp[i][k] = max(dont, take);
    }

    int maxValue(vector<vector<int>>& events, int k) {
        sort(events.begin(), events.end());

        vector<vector<int>> dp(events.size(), vector<int>(k+1, -1));

        vector<int> starts, ends;
        for (auto i : events)
        {
            starts.push_back(i[0]);
            ends.push_back(i[1]);
        }

        return solve(events, starts, ends, k, 0, dp);
    }
};
