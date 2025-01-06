#include <bits/stdc++.h>
#include <queue>

using namespace std;

class Solution
{
public:
  bool canVisitAllRooms(vector<vector<int>> &rooms)
  {
    int n = rooms.size();
    queue<int> q;
    vector<bool> visited(n, false);
    q.push(0);
    visited[0] = true;
    int ans = 1;
    while (!q.empty())
    {
      int v = q.front();
      q.pop();
      for (int i = 0; i < rooms[v].size(); i++)
      {
        if (!visited[rooms[v][i]])
        {
          q.push(rooms[v][i]);
          visited[rooms[v][i]] = true;
          ans++;
        }
      }
    }
    return ans == n;
  }
};