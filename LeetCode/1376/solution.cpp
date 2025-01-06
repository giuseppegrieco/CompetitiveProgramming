#include <bits/stdc++.h>
#include <queue>
#include <stack>

using namespace std;

class Solution
{
public:
  // DFS approach
  int numOfMinutes(int n, int headID, vector<int> &manager, vector<int> &informTime)
  {
    vector<vector<int>> adj(n);
    for (int i = 0; i < n; i++)
    {
      if (i != headID)
      {
        adj[manager[i]].push_back(i);
      }
    }

    stack<int> s;
    s.push(headID);
    vector<int> t(n);
    int ans = 0;

    while (!s.empty())
    {
      int v = s.top();
      s.pop();
      t[v] = informTime[v];
      if (t[v] > ans)
      {
        ans = t[v];
      }
      for (int u : adj[v])
      {
        s.push(u);
        informTime[u] += t[v];
      }
    }

    return ans;
  }

  // BFS approach
  // int numOfMinutes(int n, int headID, vector<int> &manager, vector<int> &informTime)
  // {
  //   vector<vector<int>> adj(n);
  //   for (int i = 0; i < n; i++)
  //   {
  //     if (i != headID)
  //     {
  //       adj[manager[i]].push_back(i);
  //     }
  //   }

  //   queue<int> q;
  //   q.push(headID);
  //   vector<int> t(n);
  //   int ans = 0;

  //   while (!q.empty())
  //   {
  //     int v = q.front();
  //     q.pop();
  //     t[v] = informTime[v];
  //     if (t[v] > ans)
  //     {
  //       ans = t[v];
  //     }
  //     for (int u : adj[v])
  //     {
  //       q.push(u);
  //       informTime[u] += t[v];
  //     }
  //   }

  //   return ans;
  // }
};