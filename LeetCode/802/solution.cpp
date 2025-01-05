#include <bits/stdc++.h>
#include <queue>

using namespace std;

class Solution
{
public:
  vector<int> eventualSafeNodes(vector<vector<int>> &graph)
  {
    int n = graph.size();
    vector<vector<int>> invAdj(n);
    vector<int> indegree(n);

    for (uint i = 0; i < n; i++)
    {
      for (int v : graph[i])
      {
        invAdj[v].push_back(i);
        indegree[i]++;
      }
    }

    queue<int> q;
    for (uint i = 0; i < n; i++)
    {
      if (indegree[i] == 0)
      {
        q.push(i);
      }
    }

    vector<bool> safe(n, false);
    while (!q.empty())
    {
      int v = q.front();
      q.pop();
      safe[v] = true;

      for (int u : invAdj[v])
      {
        indegree[u]--;
        if (indegree[u] == 0)
        {
          q.push(u);
        }
      }
    }

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
      if (safe[i])
      {
        ans.push_back(i);
      }
    }
    return ans;
  }
};