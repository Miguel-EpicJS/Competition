class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        long long g = 0, p = 0, m = 0, mg = 0, mp = 0, mm = 0;

        for (int i = 0; i < garbage.size(); i++)
        {
            for (auto j : garbage[i])
            {
                if (j == 'M') m++, mm = i;
                if (j == 'P') p++, mp = i;
                if (j == 'G') g++, mg = i;
            }
        }
        for (int i = 1; i < travel.size(); i++)
        {
            travel[i] += travel[i-1];
        }
        long long ans = g+p+m;
        if (mg != 0) ans += travel[mg-1]; 
        if (mp != 0) ans += travel[mp-1]; 
        if (mm != 0) ans += travel[mm-1]; 

        return ans;
    }
};
