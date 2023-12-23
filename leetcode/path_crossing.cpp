class Solution {
public:
    bool isPathCrossing(string path) {
        
        map<pair<int, int>, bool> pos;
        map<char, pair<int, int>> dir;

        pos[{0, 0}] = true;
        dir['N'] = {0, 1};
        dir['S'] = {0, -1};
        dir['E'] = {1, 0};
        dir['W'] = {-1, 0};

        int x = 0, y = 0;

        bool ans = false;

        for (auto s : path)
        {
            x += dir[s].first;
            y += dir[s].second;

            if (pos[{x, y}] == true) ans = true;
            else pos[{x, y}] = true;
        }

        return ans;

    }
};
