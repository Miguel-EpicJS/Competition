class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if (sx == fx && sy == fy && t == 1) return false; 
        if (sx == fx && sy == fy && t > 1) return true;

        if (max(abs(fx - sx), abs(sy - fy)) <= t) return true;
        else return false;

    }
};
