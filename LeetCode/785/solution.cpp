#include <bits/stdc++.h>
#include <queue>

using namespace std;

class Solution
{
public:
  bool isBipartite(vector<vector<int>> &graph)
  {
    uint n = graph.size();
    vector<uint> color(n, 0);

    queue<uint> q;

    for (uint i = 0; i < n; i++)
    {
      if (!color[i])
      {
        q.push(i);
        color[i] = 1;
        while (!q.empty())
        {
          uint u = q.front();
          q.pop();

          for (auto &v : graph[u])
          {
            if (!color[v])
            {
              color[v] = (color[u] * 2) % 3;
              q.push(v);
            }
            else if (color[v] == color[u])
            {
              return false;
            }
          }
        }
      }
    }
    return true;
  }
};