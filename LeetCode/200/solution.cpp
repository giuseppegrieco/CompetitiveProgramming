#include <bits/stdc++.h>
#include <queue>

using namespace std;

class Solution
{
public:
  int numIslands(vector<vector<char>> &grid)
  {
    uint rows = grid.size();
    uint cols = grid[0].size();

    queue<pair<uint, uint>> q;
    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    uint ans = 0;
    for (uint i = 0; i < rows; i++)
    {
      for (uint j = 0; j < cols; j++)
      {
        if (grid[i][j] == '1')
        {
          ans++;

          q.push({i, j});
          grid[i][j] = '0';

          while (!q.empty())
          {
            auto [vi, vj] = q.front();
            q.pop();

            uint ui, uj;
            for (auto &[d1, d2] : directions)
            {
              ui = vi + d1;
              if (ui >= 0 && ui < rows)
              {
                uj = vj + d2;
                if (uj >= 0 && uj < cols && grid[ui][uj] == '1')
                {
                  q.push({ui, uj});
                  grid[ui][uj] = 0;
                }
              }
            }
          }
        }
      }
    }
    return ans;
  }
};