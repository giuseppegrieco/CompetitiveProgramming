#include <bits/stdc++.h>
#include <queue>
#include <unordered_set>

using namespace std;

class Solution
{
public:
  // Solution 2
  int nearestExit(vector<vector<char>> &maze, vector<int> &entrance)
  {
    uint rows = maze.size();
    uint columns = maze[0].size();

    queue<pair<uint, uint>> q;

    q.push({entrance[0], entrance[1]});
    maze[entrance[0]][entrance[1]] = '+';

    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    int l = 0;
    while (!q.empty())
    {
      int levelSize = q.size();
      for (uint _ = 0; _ < levelSize; _++)
      {
        auto [i, j] = q.front();
        q.pop();

        uint ic, jc;
        for (auto &[d1, d2] : directions)
        {
          ic = i + d1;
          if (ic >= 0 && ic < rows)
          {
            jc = j + d2;
            if (jc >= 0 && jc < columns && maze[ic][jc] == '.')
            {
              if (ic == 0 || ic == rows - 1 || jc == 0 || jc == columns - 1)
              {
                return l + 1;
              }
              q.push({ic, jc});
              maze[ic][jc] = '+';
            }
          }
        }
      }

      l++;
    }

    return -1;
  }

  // Solution 1
  // int nearestExit(vector<vector<char>> &maze, vector<int> &entrance)
  // {
  //   vector<vector<int>> ids(maze.size(), vector<int>(maze[0].size()));
  //   unordered_set<int> ans;
  //   uint n = 0;
  //   for (int i = 0; i < maze.size(); i++)
  //   {
  //     for (int j = 0; j < maze[i].size(); j++)
  //     {
  //       if (maze[i][j] == '.')
  //       {
  //         ids[i][j] = n;
  //         if(i == 0 || j == 0 || i == maze.size() - 1 || j == maze[i].size() - 1) {
  //           ans.insert(n);
  //         }
  //         n++;
  //       }
  //       else
  //       {
  //         ids[i][j] = -1;
  //       }
  //     }
  //   }

  //   vector<vector<int>> adj(n);
  //   for (int i = 0; i < ids.size(); i++)
  //   {
  //     for (int j = 0; j < ids[i].size(); j++)
  //     {
  //       if (ids[i][j] >= 0)
  //       {
  //         // Top
  //         if (i > 0 && ids[i - 1][j] >= 0)
  //         {
  //           adj[ids[i][j]].push_back(ids[i - 1][j]);
  //         }
  //         // Bottom
  //         if (i < ids.size() - 1 && ids[i + 1][j] >= 0)
  //         {
  //           adj[ids[i][j]].push_back(ids[i + 1][j]);
  //         }
  //         // Left
  //         if (j > 0 && ids[i][j - 1] >= 0)
  //         {
  //           adj[ids[i][j]].push_back(ids[i][j - 1]);
  //         }
  //         // Right
  //         if (j < ids[i].size() - 1 && ids[i][j + 1] >= 0)
  //         {
  //           adj[ids[i][j]].push_back(ids[i][j + 1]);
  //         }
  //       }
  //     }
  //   }

  //   queue<int> q;
  //   vector<bool> visited(n);

  //   q.push(ids[entrance[0]][entrance[1]]);
  //   visited[ids[entrance[0]][entrance[1]]] = true;
  //   int l = 0;
  //   while (!q.empty())
  //   {
  //     int levelSize = q.size();
  //     for (uint i = 0; i < levelSize; i++)
  //     {
  //       int v = q.front();
  //       q.pop();

  //       for (int u : adj[v])
  //       {
  //           if (!visited[u])
  //           {
  //               if(ans.contains(u)) {
  //                   return l + 1;
  //               }
  //               q.push(u);
  //               visited[u] = true;
  //           }
  //       }
  //     }
  //     l++;
  //   }

  //   return -1;
  // }
};