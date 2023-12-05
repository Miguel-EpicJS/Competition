class Solution {
public:
    int numberOfMatches(int n) {
        int round = 0;
        while(n > 1)
        {
            round += (n/2);
            n = ceil(n/2.0);
        } 
        return round;
    }
};
