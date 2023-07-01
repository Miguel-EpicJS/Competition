class Solution {
public:

    int solve(vector<int>& cookies, int k, int i, vector<int>& amounts)
    {
        if (i >= cookies.size()) return *max_element(amounts.begin(), amounts.end());

        int m = 9999999;

        for (int j = 0; j < k; j++)
        {
            amounts[j] += cookies[i];
            m = min(m, solve(cookies, k, i+1, amounts));
            amounts[j] -= cookies[i];
        }

        return m;
    }

    int distributeCookies(vector<int>& cookies, int k) {
        if (k == cookies.size()) return *max_element(cookies.begin(), cookies.end());
        vector<int> amounts(8, 0);
        return solve(cookies, k, 0, amounts);
    }
};
