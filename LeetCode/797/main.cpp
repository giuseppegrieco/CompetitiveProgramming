#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

string formatAdj(vector<vector<int>> adj)
{
  string ans = "[";
  for (int i = 0; i < adj.size(); i++)
  {
    ans += "[";
    for (int j = 0; j < adj[i].size(); j++)
    {
      ans += to_string(adj[i][j]) + ", ";
    }
    ans = ans.substr(0, ans.size() - 2);
    ans += "], ";
  }
  return ans.substr(0, ans.size() - 2) + "]";
}

void testCase(int id, vector<vector<int>> graph, vector<vector<int>> expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << formatAdj(expectedResult) << endl;
  cout << "Result: " << formatAdj(sol.allPathsSourceTarget(graph)) << endl;
}

int main()
{
  testCase(1, {{1, 2}, {3}, {3}, {}}, {{0, 1, 3}, {0, 2, 3}});
  testCase(2, {{4, 3, 1}, {3, 2, 4}, {3}, {4}, {}}, {{0, 4}, {0, 3, 4}, {0, 1, 3, 4}, {0, 1, 2, 3, 4}, {0, 1, 4}});
  return 0;
}
