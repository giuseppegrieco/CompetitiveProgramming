#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int findJudge(int n, vector<vector<int>> &trust)
  {
    vector<pair<uint, uint>> degree(n, {0, 0});
    for (auto &e : trust)
    {
      degree[e[0] - 1].first++;
      degree[e[1] - 1].second++;
    }
    for (uint i = 0; i < n; i++)
    {
      auto &[in, out] = degree[i];
      if (in == 0 && out == n - 1)
      {
        return i + 1;
      }
    }
    return -1;
  }
};