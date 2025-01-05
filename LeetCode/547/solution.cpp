#include <bits/stdc++.h>
#include <queue>
#include <unordered_set>

using namespace std;

class Solution
{
public:
  int findCircleNum(vector<vector<int>> &isConnected)
  {
    vector<bool> visited(isConnected.size(), false);
    queue<uint> q;
    uint ans = 0;

    for (uint j = 0; j < isConnected.size(); j++)
    {
      if (!visited[j])
      {
        ans++;
        q.push(j);
        while (!q.empty())
        {
          uint v = q.front();
          q.pop();
          for (uint i = 0; i < isConnected[v].size(); i++)
          {
            if (isConnected[v][i] == 1 && !visited[i])
            {
              q.push(i);
              visited[i] = true;
            }
          }
        }
      }
    }

    return ans;
  }
};