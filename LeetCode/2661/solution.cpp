#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat)
  {
    uint m = mat.size(), n = mat[0].size();
    vector<pair<uint, uint>> pos(n * m, {-1, -1});
    vector<uint> coloredRows(m, 0);
    vector<uint> coloredColumns(n, 0);

    for (uint i = 0; i < m; i++)
    {
      for (uint j = 0; j < n; j++)
      {
        pos[mat[i][j] - 1] = {i, j};
      }
    }

    for (uint k = 0; k < n * m; k++)
    {
      auto [i, j] = pos[arr[k] - 1];
      coloredRows[i]++;
      coloredColumns[j]++;
      if (coloredRows[i] == n || coloredColumns[j] == m)
      {
        return k;
      }
    }

    return -1;
  }
};