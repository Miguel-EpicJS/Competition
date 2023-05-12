#include <bits/stdc++.h>

class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long> dp(100010, 0);
        return recursionMostPoints(questions, 0, questions.size(), dp);
    }

    long long recursionMostPoints(vector<vector<int>>& questions, int i, int n, vector<long long> &dp)
    {
        if (i >= n)
        {
            return 0;
        }
        if (dp[i] != 0) return dp[i];

        long long take = recursionMostPoints(questions, i+questions[i][1]+1, n, dp) + questions[i][0];
        long long skip = recursionMostPoints(questions, i+1, n, dp);


        return dp[i] = max(take, skip);
    }
};
