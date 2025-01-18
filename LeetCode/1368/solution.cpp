#include <bits/stdc++.h>
#include <queue>

using namespace std;

class Solution
{
public:
  int minCost(vector<vector<int>> &grid)
  {
    uint rows = grid.size();
    uint cols = grid[0].size();

    vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    priority_queue<tuple<uint, uint, uint>, vector<tuple<uint, uint, uint>>, greater<>> q;
    vector<vector<uint>> cost(rows, vector<uint>(cols, INT_MAX));

    q.push({0, 0, 0});
    cost[0][0] = 0;

    while (!q.empty())
    {
      auto [vi, vj, vcost] = q.top();
      q.pop();

      uint ui, uj, ucost;
      for (uint d = 0; d < 4; d++)
      {
        ui = vi + directions[d].first;
        if (ui >= 0 && ui < rows)
        {
          uj = vj + directions[d].second;
          if (uj >= 0 && uj < cols)
          {
            ucost = vcost + (d != (grid[vi][vj] - 1));
            if (cost[ui][uj] > ucost)
            {
              cost[ui][uj] = ucost;
              q.push({ui, uj, ucost});
            }
          }
        }
      }
    }
    return cost[rows - 1][cols - 1];
  }
};