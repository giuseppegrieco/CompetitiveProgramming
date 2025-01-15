#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

class Solution
{
public:
  int maximalNetworkRank(int n, vector<vector<int>> &roads)
  {
    vector<unordered_set<uint>> adj(n);
    for (auto &road : roads)
    {
      adj[road[0]].insert(road[1]);
      adj[road[1]].insert(road[0]);
    }

    uint ans = 0, rank = 0;

    for (uint u = 0; u < n; u++)
    {
      for (uint v = u + 1; v < n; v++)
      {
        rank = adj[v].size() + adj[u].size();
        if (adj[v].find(u) != adj[v].end())
        {
          rank--;
        }
        ans = max(ans, rank);
      }
    }

    return ans;
  }
};