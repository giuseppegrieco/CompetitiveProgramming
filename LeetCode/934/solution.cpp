#include <bits/stdc++.h>
#include <queue>

using namespace std;

class Solution
{
public:
  int shortestBridge(vector<vector<int>> &grid)
  {
    uint n = grid.size();
    pair<uint, uint> start = {0, 0};
    for (uint i = 0; i < n; i++)
    {
      for (uint j = 0; j < n; j++)
      {
        if (grid[i][j] == 1)
        {
          grid[i][j] = 2;
          start = {i, j};
          i = n;
          break;
        }
      }
    }

    queue<pair<uint, uint>> q;
    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    q.push(start);

    while (!q.empty())
    {
      auto [i, j] = q.front();
      q.pop();

      uint ic, jc;
      for (auto &[d1, d2] : directions)
      {
        ic = i + d1;
        if (ic >= 0 && ic < n)
        {
          jc = j + d2;
          if (jc >= 0 && jc < n && grid[ic][jc] == 1)
          {
            q.push({ic, jc});
            grid[ic][jc] = 2;
          }
        }
      }
    }

    for (uint i = 0; i < n; i++)
    {
      for (uint j = 0; j < n; j++)
      {
        if (grid[i][j] == 2)
        {
          q.push({i, j});
        }
      }
    }

    uint ans = 0;
    while (!q.empty())
    {
      uint size = q.size();
      for (uint _ = 0; _ < size; _++)
      {
        auto [i, j] = q.front();
        q.pop();

        uint ic, jc;
        for (auto &[d1, d2] : directions)
        {
          ic = i + d1;
          if (ic >= 0 && ic < n)
          {
            jc = j + d2;
            if (jc >= 0 && jc < n)
            {
              if (grid[ic][jc] == 1)
              {
                return ans;
              }
              if (grid[ic][jc] != 3)
              {
                q.push({ic, jc});
                grid[ic][jc] = 3;
              }
            }
          }
        }
      }
      ans++;
    }

    return -1;
  }
};