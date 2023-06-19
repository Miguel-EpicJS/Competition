class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int c = 0;
        int m = 0;

        for (auto i : gain)
        {
            c += i;
            m = max(c, m);
        }

        return m;
    }
};
