#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id,
              vector<vector<int>> grid,
              int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.minCost(grid) << endl;
}

int main()
{
  testCase(1, {{1, 1, 1, 1}, {2, 2, 2, 2}, {1, 1, 1, 1}, {2, 2, 2, 2}}, 3);
  testCase(2, {{1, 1, 3}, {3, 2, 2}, {1, 1, 4}}, 0);
  testCase(3, {{1, 2}, {4, 3}}, 1);
  return 0;
}
