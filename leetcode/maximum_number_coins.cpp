class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.rbegin(), piles.rend());

        int j = 0;
        int ans = 0;
        
        for (int i = 1; i < piles.size()-j; i+=2)
        {
            j++;
            ans += piles[i];
        }

        return ans;
    }
};
