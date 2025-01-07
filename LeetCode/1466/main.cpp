#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id,
              int n,
              vector<vector<int>> connections,
              int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.minReorder(n, connections) << endl;
}

int main()
{
  testCase(1, 6, {{0, 1}, {1, 3}, {2, 3}, {4, 0}, {4, 5}}, 3);
  testCase(2, 5, {{1, 0}, {1, 2}, {3, 2}, {3, 4}}, 2);
  testCase(2, 3, {{1, 0}, {2, 0}}, 0);
  return 0;
}
