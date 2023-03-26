#include <bits/stdc++.h>

using namespace std;

const int MAX_ROWS = 31;
const int MAX_COLS = 31;

char matrix[MAX_ROWS][MAX_COLS];
bool visited[MAX_ROWS][MAX_COLS];
int dist[MAX_ROWS][MAX_COLS];

int dr[] = {-1, 0, 1, 0}; // row direction (up, right, down, left)
int dc[] = {0, 1, 0, -1}; // column direction (up, right, down, left)

int bfs(int start_row, int start_col, int end_row, int end_col, int rows, int cols) {
    queue<pair<int, int>> q;
    q.push({start_row, start_col});
    visited[start_row][start_col] = true;
    dist[start_row][start_col] = 0;
    
    while (!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        
        if (row == end_row && col == end_col) {
            return dist[row][col];
        }
        
        // explore neighbors
        for (int i = 0; i < 4; i++) {
            int r = row + dr[i];
            int c = col + dc[i];
            if (r >= 0 && r < rows && c >= 0 && c < cols && matrix[r][c] != '#' && !visited[r][c]) {
                q.push({r, c});
                visited[r][c] = true;
                dist[r][c] = dist[row][col] + 1;
            }
        }
    }
    
    return -1; // end node not reachable
}

int main() {
    int rows, cols, start_row, start_col, end_row, end_col;
    cin >> rows;
    cols = rows;
     
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
            visited[i][j] = false;
            dist[i][j] = INT_MAX;

	    if (matrix[i][j] == 'S')
	    {
		start_row = i;
		start_col = j;
	    }
	    else if (matrix[i][j] == 'E')
	    {
		end_row = i;
		end_col = j;
	    }
        }
    }
    
    int shortest_path = bfs(start_row, start_col, end_row, end_col, rows, cols);
    
    if (shortest_path == -1) {
        cout << "End node not reachable" << endl;
    } else {
        cout << shortest_path << endl;
    }
    
    return 0;
}
