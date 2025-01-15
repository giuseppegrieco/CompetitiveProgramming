#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id,
              int n,
              vector<vector<int>> roads,
              int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.maximalNetworkRank(n, roads) << endl;
}

int main()
{
  testCase(1, 4, {{0, 1}, {0, 3}, {1, 2}, {1, 3}}, 4);
  testCase(2, 5, {{0, 1}, {0, 3}, {1, 2}, {1, 3}, {2, 3}, {2, 4}}, 5);
  testCase(2, 8, {{0, 1}, {1, 2}, {2, 3}, {2, 4}, {5, 6}, {5, 7}}, 5);

  return 0;
}
