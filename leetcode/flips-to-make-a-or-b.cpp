class Solution {
public:
    bool gb(int num, int i)
    {
        return ((num & (1 << i )) != 0);
    }

    int minFlips(int a, int b, int c) {
        int ans = 0;

        for (int i = 0; i < 32; i++)
        {
            if (gb(a, i) == true && gb(b, i) == true && gb(c, i) == false)
            {
                ans += 2;
            }
            else if (gb(a, i) == false && gb(b, i) == false && gb(c, i) == true)
            {
                ans ++;
            }
            else if (gb(a, i) != gb(b, i) && gb(c, i) == false)
            {
                ans++;
            }
        }

        return ans;
    }
};

