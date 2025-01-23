#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int countServers(vector<vector<int>> &grid)
  {
    uint m = grid.size(), n = grid[0].size();

    vector<uint> sumRows(m, 0);
    vector<uint> sumCols(n, 0);

    uint ans = 0, sum;

    for (uint i = 0; i < m; i++)
    {
      sum = 0;
      for (uint j = 0; j < n; j++)
      {
        sum += grid[i][j];
      }
      sumRows[i] = sum;
      ans += sum;
    }

    for (uint j = 0; j < n; j++)
    {
      sum = 0;
      for (uint i = 0; i < m; i++)
      {
        sum += grid[i][j];
      }
      sumCols[j] = sum;
    }

    for (uint i = 0; i < m; i++)
    {
      for (uint j = 0; j < n; j++)
      {
        if (grid[i][j] && sumRows[i] == 1 && sumCols[j] == 1)
        {
          ans--;
        }
      }
    }

    return ans;
  }
};