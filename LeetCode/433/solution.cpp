#include <bits/stdc++.h>
#include <queue>

using namespace std;

class Solution
{
public:
  int minMutation(string startGene, string endGene, vector<string> &bank)
  {
    if (bank.size() == 0)
    {
      return -1;
    }
    if (startGene == endGene)
    {
      return 0;
    }

    uint t = 0;
    uint n = bank.size();
    uint k = startGene.size();
    vector<vector<uint>> adj(n + 1);
    uint diff, id = 0;
    for (uint i = 0; i < n; i++)
    {
      if (endGene == bank[i])
      {
        t = i + 1;
      }
      for (uint j = 0; j < n; j++)
      {
        diff = 0;
        for (uint c = 0; c < k; c++)
        {
          if (bank[i][c] != bank[j][c])
          {
            diff++;
          }
        }
        if (diff == 1)
        {
          adj[i + 1].push_back(j + 1);
          adj[j + 1].push_back(i + 1);
        }
      }
      diff = 0;
      for (uint c = 0; c < k; c++)
      {
        if (bank[i][c] != startGene[c])
        {
          diff++;
        }
      }
      if (diff == 1)
      {
        adj[0].push_back(i + 1);
      }
    }

    if (t == 0)
    {
      return -1;
    }

    queue<uint> q;
    vector<bool> visited(n, false);

    q.push(0);
    visited[0] = true;

    uint ans = 0;

    while (!q.empty())
    {
      uint ls = q.size();
      for (uint _ = 0; _ < ls; _++)
      {
        uint v = q.front();
        q.pop();
        for (uint &u : adj[v])
        {
          if (u == t)
            return ans + 1;
          if (!visited[u])
          {
            visited[u] = true;
            q.push(u);
          }
        }
      }
      ans++;
    }

    return -1;
  }
};