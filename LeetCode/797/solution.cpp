#include <bits/stdc++.h>
#include <queue>
#include <unordered_set>

using namespace std;

class Solution
{
public:
  vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
  {
    int n = graph.size();
    queue<pair<int, vector<int>>> q;
    q.push({0, {0}});
    vector<vector<int>> ans;

    while (!q.empty())
    {
      int l = q.size();
      for (int i = 0; i < l; i++)
      {
        auto [v, p] = q.front();
        q.pop();

        for (uint u : graph[v])
        {
          vector<int> path = p;
          path.push_back(u);
          q.push({u, path});
          if (u == n - 1)
          {
            ans.push_back(path);
          }
        }
      }
    }

    return ans;
  }
};