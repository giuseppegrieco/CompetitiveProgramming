#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  long long gridGame(vector<vector<int>> &grid)
  {
    long long firstRowSum = accumulate(begin(grid[0]), end(grid[0]), 0LL),
              secondRowSum = 0;
    long long minimumSum = __LONG_LONG_MAX__;
    for (int turnIndex = 0; turnIndex < grid[0].size(); ++turnIndex)
    {
      firstRowSum -= grid[0][turnIndex];
      minimumSum = min(minimumSum, max(firstRowSum, secondRowSum));
      secondRowSum += grid[1][turnIndex];
    }
    return minimumSum;
  }
};