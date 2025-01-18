#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id, vector<vector<int>> graph, bool expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.isBipartite(graph) << endl;
}

int main()
{
  testCase(1, {{1, 2, 3}, {0, 2}, {0, 1, 3}, {0, 2}}, false);
  testCase(2, {{1, 3}, {0, 2}, {1, 3}, {0, 2}}, true);
  return 0;
}
