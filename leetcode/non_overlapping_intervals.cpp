class Solution {
public:

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        int prev = 0;
        int rem = 0;

        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[prev][1] <= intervals[i][0])
            {
                prev=i;
            }
            else if (intervals[prev][1] >= intervals[i][1])
            {
                rem++;
                prev=i;
            }
            else if (intervals[prev][1] < intervals[i][1])
            {
                rem++;
            }
        }

        return rem;

    }
};
