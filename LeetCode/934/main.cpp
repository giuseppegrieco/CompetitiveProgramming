#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id,
              vector<vector<int>> grid,
              uint expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.shortestBridge(grid) << endl;
}

int main()
{
  testCase(1, {{0, 1}, {1, 0}}, 1);
  testCase(2, {{0, 1, 0}, {0, 0, 0}, {0, 0, 1}}, 2);
  testCase(3, {{1, 1, 1, 1, 1}, {1, 0, 0, 0, 1}, {1, 0, 1, 0, 1}, {1, 0, 0, 0, 1}, {1, 1, 1, 1, 1}}, 1);
  testCase(4, {{0, 1, 0, 0, 0, 0}, {0, 1, 1, 1, 0, 0}, {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 0}}, 3);
  return 0;
}
