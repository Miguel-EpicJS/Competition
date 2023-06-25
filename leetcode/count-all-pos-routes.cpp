class Solution {
public:

    long long solve(vector<int>& locations, int start, int finish, int fuel, vector<vector<long long>>& dp)
    {
        if (start < 0 || start >= locations.size() || fuel < 0)
        {
            return 0;
        }
        if (dp[start][fuel] > -1) return dp[start][fuel];

        long long tot = 0LL;
        if (start == finish) tot++;
        int f = 0;
        for (int i = 0; i < locations.size(); i++)
        {
            if (i == start) continue;
            f = fuel - (abs(locations[start]-locations[i]));
            tot = (tot + solve(locations, i, finish, f, dp)) % 1000000007;
        }

        return dp[start][fuel] = tot;
    }

    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        vector<vector<long long>> dp(101, vector<long long>(201, -1));
        return solve(locations, start, finish, fuel, dp) % 1000000009;

    }


};
