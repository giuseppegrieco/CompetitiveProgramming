#include <bits/stdc++.h>
#include <queue>

using namespace std;

class Solution
{
public:
  vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
  {
    uint m = mat.size(), n = mat[0].size();
    vector<vector<int>> ans(m, vector<int>(n, -1));
    queue<pair<uint, uint>> q;
    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    for (uint i = 0; i < m; i++)
    {
      for (uint j = 0; j < n; j++)
      {
        if (!mat[i][j])
        {
          q.push({i, j});
          ans[i][j] = 0;
        }
      }
    }

    uint level = 1, levelSize = 0, i = 0, j = 0;
    while (!q.empty())
    {
      levelSize = q.size();

      for (uint _ = 0; _ < levelSize; _++)
      {
        pair<uint, uint> v = q.front();
        q.pop();
        for (auto &[d1, d2] : directions)
        {
          i = v.first + d1;
          if (i >= 0 && i < m)
          {
            j = v.second + d2;
            if (j >= 0 && j < n && ans[i][j] == -1)
            {
              ans[i][j] = level;
              q.push({i, j});
            }
          }
        }
      }
      level++;
    }

    return ans;
  }
};