class Solution {
public:
    long long mod = 1e9+7;
    vector<vector<long long>> table;

    long long dfs(vector<int> &nums)
    {
        int m = nums.size();
        if (m < 3) return 1;

        vector<int> leftN, rightN;
        for (int i = 1; i < m; ++i)
        {
            if (nums[i] < nums[0]) {
                leftN.push_back(nums[i]);
            }
            else {
                rightN.push_back(nums[i]);
            }
        }

        long long leftW = dfs(leftN) % mod;
        long long rightW = dfs(rightN) % mod;

        return (((leftW * rightW) % mod) * table[m-1][leftN.size()]) % mod;
    }

    int numOfWays(vector<int>& nums) {
        int m = nums.size();
        table.resize(m+1);
        for (int i = 0; i < m + 1; ++i)
        {
            table[i] = vector<long long> (i+1, 1);
            for (int j = 1; j < i; ++j)
            {
                table[i][j] = (table[i-1][j-1] + table[i-1][j]) % mod;
            }
        }

        return (dfs(nums)-1) % mod;
    }
};

// edital 
