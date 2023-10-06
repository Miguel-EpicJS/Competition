class Solution {
public:
    int integerBreak(int n) {
        long long ans = 1;
        if (n <= 2) return 1;
        if (n == 3) return 2;
        while(n>4)
        {
            ans *= 3;
            n-=3;
        }
        return ans*n;
    }
};
