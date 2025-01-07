#include <bits/stdc++.h>
#include <queue>

using namespace std;

class Solution
{
public:
  int minReorder(int n, vector<vector<int>> &connections)
  {
    vector<vector<pair<int, int>>> adj(n);
    for (int i = 0; i < connections.size(); i++)
    {
      adj[connections[i][1]].push_back({connections[i][0], 0});
      adj[connections[i][0]].push_back({connections[i][1], 1});
    }

    queue<int> q;
    vector<bool> visited(n);
    int ans = 0;

    q.push(0);
    visited[0] = true;

    while (!q.empty())
    {
      auto v = q.front();
      q.pop();
      for (auto [u, s] : adj[v])
      {
        if(!visited[u]) {
          visited[u] = true;
          ans += s;
          q.push(u);
        }
      }
    }

    return ans;
  }
};