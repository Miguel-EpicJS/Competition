class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string curr = paths[0][1];

        for (int i = 0; i < paths.size(); i++)
        {
            bool ok = false;
            for (int j = 0; j < paths.size(); j++)
            {
                if (paths[j][0] == curr) ok = true, curr = paths[j][1];
            }
            if (ok == false) break;
        }

        return curr;

    }
};
