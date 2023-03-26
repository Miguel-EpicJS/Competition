#include <bits/stdc++.h>

using namespace std;


int dfs(vector<vector<int>>& grid, int i, int j, int m, int n, vector<vector<bool>>& visited) {
    // Check if current cell is valid
    if (i < 0 || i >= m || j < 0 || j >= n || visited[i][j] || grid[i][j] == 1) {
        return 0;
    }
    
    // Mark current cell as visited
    visited[i][j] = true;
    
    // Check if we have reached the bottom-right corner
    if (i == m-1 && j == n-1) {
        visited[i][j] = false;
        return 1;
    }
    
    // Explore all four possible directions
    int paths = dfs(grid, i-1, j, m, n, visited) +
                dfs(grid, i+1, j, m, n, visited) +
                dfs(grid, i, j-1, m, n, visited) +
                dfs(grid, i, j+1, m, n, visited);
    
    // Mark current cell as unvisited
    visited[i][j] = false;
    
    return paths;
}

int unique_paths(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    return dfs(grid, 0, 0, m, n, visited);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while (t--)
    {
	int n;
	cin >> n;

	vector<vector<int>> g;
	vector<int> s;

	for (int i = 0; i < n; i++)
	{
	    g.push_back(s);
	    for (int j = 0; j < n; j++)
	    {
		int x;
		cin >> x;
		g[i].push_back(x);
	    }
	}
	g[0][0] = 0;
	cout << unique_paths(g) << "\n";
    }

    return 0;
}

