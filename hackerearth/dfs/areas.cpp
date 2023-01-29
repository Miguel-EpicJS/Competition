#include <iostream>

#include <stack>
#include <vector>

using namespace std;

int dfs(int r, int c, vector<vector<char>> &matrix, int x, int y) {
    if (x < 0 || x >= r)
	return 0;
    if (y < 0 || y >= c)
	return 0;
    if (matrix[x][y] == '#')
	return 0;

    matrix[x][y] = '#';
    
    return 1+dfs(r, c, matrix, x+1, y)+dfs(r, c, matrix, x-1, y)+dfs(r, c, matrix, x, y+1)+dfs(r, c, matrix, x, y-1);
}

void solve() {
    int row, col;

    cin >> row >> col;

    vector<vector<char>> m(row, vector<char>(col));

    vector<int> results;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int r = dfs(row, col, m, i, j);
	    if (r != 0)
	    {
		results.push_back(r);
	    }
        }
    }

    cout << results.size() << "\n";
    
    for (int i = 0; i < results.size(); i++)
    {
	cout << results[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        solve();
    }
}
