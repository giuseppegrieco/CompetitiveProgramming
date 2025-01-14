#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector<int> findSmallestSetOfVertices(int n, vector<vector<int>> &edges)
  {
    vector<uint> indegree(n, 0);
    for (auto &edge : edges)
    {
      indegree[edge[1]]++;
    }
    vector<int> ans;
    for (uint i = 0; i < n; i++)
    {
      if (indegree[i] == 0)
      {
        ans.push_back(i);
      }
    }
    return ans;
  }
};