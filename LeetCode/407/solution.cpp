#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int trapRainWater(vector<vector<int>> &heightMap)
  {
    uint m = heightMap.size();
    uint n = heightMap[0].size();
    vector<vector<int>> water(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
        {
          water[i][j] = heightMap[i][j];
        }
        else
        {
          water[i][j] = max(heightMap[i][j], min(water[i - 1][j], water[i][j - 1]));
        }
      }
    }

    bool isStable = false;
    while (!isStable)
    {
      isStable = true;

      for (int i = 1; i < m - 1; i++)
      {
        for (int j = 1; j < n - 1; j++)
        {
          int candidate = max(heightMap[i][j], min(water[i][j], min(water[i - 1][j], water[i][j - 1])));
          if (candidate != water[i][j])
          {
            water[i][j] = candidate;
            isStable = false;
          }
        }
      }

      for (int i = m - 2; i >= 1; i--)
      {
        for (int j = n - 2; j >= 1; j--)
        {
          int candidate = max(heightMap[i][j], min(water[i][j], min(water[i + 1][j], water[i][j + 1])));
          if (candidate != water[i][j])
          {
            water[i][j] = candidate;
            isStable = false;
          }
        }
      }
    }

    uint ans = 0;
    for (int i = 1; i < m - 1; i++)
    {
      for (int j = 1; j < n - 1; j++)
      {
        ans += water[i][j] - heightMap[i][j];
      }
    }
    return ans;
  }
};
