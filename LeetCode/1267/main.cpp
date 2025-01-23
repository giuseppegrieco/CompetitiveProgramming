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
  cout << "Result: " << sol.countServers(grid) << endl;
}

int main()
{
  testCase(1, {{1, 0}, {0, 1}}, 0);
  testCase(2, {{1, 0}, {1, 1}}, 3);
  testCase(3, {{1, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}}, 4);
  return 0;
}
