class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        if (str.size() <= 1)
        {
            return str.length();
        }

        int maxLength = 0;
        bool vis[257] = {false};

        int left = 0, right = 0;
        for (; right < str.length(); right++)
        {
            if (vis[str[right]] == false)
            {
                vis[str[right]] = true;
            }
            else
            {
                maxLength = max(maxLength, (right-left));

                while (left < right)
                {
                    if (str[left] != str[right])
                    {
                        vis[str[left]] = false;
                    }
                    else 
                    {
                        left++;
                        break;
                    }
                    left++;
                }
            }
        }

        return max(maxLength, (right-left));
    }
};
