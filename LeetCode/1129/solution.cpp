#include <bits/stdc++.h>
#include <queue>

using namespace std;

class Solution
{
public:
  vector<int> shortestAlternatingPaths(int n,
                                       vector<vector<int>> &redEdges,
                                       vector<vector<int>> &blueEdges)
  {
    vector<vector<vector<uint>>> adj(2, vector<vector<uint>>(n));

    for (auto &e : redEdges)
    {
      adj[0][e[0]].push_back(e[1]);
    }

    for (auto &e : blueEdges)
    {
      adj[1][e[0]].push_back(e[1]);
    }

    vector<int> ans(n, -1);

    queue<pair<uint, uint>> q;
    vector<vector<bool>> visited(2);
    visited[0] = vector<bool>(n, false);
    visited[1] = vector<bool>(n, false);

    int level = 0, levelSize = 0;
    q.push({1, 0});
    q.push({0, 0});
    visited[0][0] = true;
    visited[1][0] = true;
    ans[0] = 0;
    int assigned = 0;

    while (!q.empty())
    {
      levelSize = q.size();
      for (uint _ = 0; _ < levelSize; _++)
      {
        auto [c, v] = q.front();
        q.pop();
        if (ans[v] == -1)
        {
          ans[v] = level;
          assigned++;
          if (assigned == n)
          {
            break;
          }
        }
        uint nc = (c + 1) % 2;
        for (uint u : adj[c][v])
        {
          if (!visited[nc][u])
          {
            q.push({nc, u});
            visited[nc][u] = true;
          }
        }
      }
      level++;
    }

    return ans;
  }
};