class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if (arr.size() <= 2) return true;

        sort(arr.begin(), arr.end());

        int diff = arr[1] - arr[0];

        bool ans = true;
        for (int i = 0; i < arr.size()-1; i++)
        {
            if (arr[i+1]-arr[i-1] != diff)
            {
                ans = false;
                return ans;
            } 
        }

        return ans;
    }
};
