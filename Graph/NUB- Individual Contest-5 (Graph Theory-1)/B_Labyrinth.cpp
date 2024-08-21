#include <bits/stdc++.h>
using namespace std;
#define ll long long

int cnt = 0;
bool f = false;
vector<vector<char>> grid;
vector<vector<bool>> visited;
vector<pair<int,int>> moves = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}}; // Missing semicolon added

void dfs(int x, int y)
{
    visited[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int x_ = x + moves[i].first;
        int y_ = y + moves[i].second;

        // Check bounds and whether the cell is unvisited and open
        if (x_ >= 0 && x_ < grid.size() && y_ >= 0 && y_ < grid[0].size() && !visited[x_][y_] && grid[x_][y_] == '.')
        {
            dfs(x_, y_);
        }
    }
}

int main()
{
    int row, col;
    cin >> row >> col;

    // Resize the grid and visited matrix
    grid.resize(row, vector<char>(col));
    visited.resize(row, vector<bool>(col, false));

    // Input the grid
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> grid[i][j];
        }
    }

    // Mark the walls as visited
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (grid[i][j] == '#')
            {
                visited[i][j] = true;
            }
        }
    }

    // Start DFS from each unvisited open cell
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (grid[i][j] == '.' && !visited[i][j])
            {
                
                
            }
        }
    }

    //Output the visited matrix (for debugging)
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << visited[i][j];
        }
        cout << "\n";
    }

    // Output the count of connected components
    //cout << cnt << endl;

    return 0;
}
