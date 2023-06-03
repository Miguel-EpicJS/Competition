class Solution {
public:
    int maxTime = INT_MIN;

    void dfs(vector<int> adj[], vector<int>& inform, int curr, int time)
    {
        maxTime = max(maxTime, time);
        for (int a : adj[curr])
        {
            dfs(adj, inform, a, time+inform[curr]);
        }
    }

    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int> adjList[n];

        for (int i = 0; i < n; i++)
        {
            if (manager[i] != -1) {
                adjList[manager[i]].push_back(i);
            }
        }

        dfs(adjList, informTime, headID, 0);
        return maxTime;
    }
};

// edital
