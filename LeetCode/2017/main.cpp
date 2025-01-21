#include "solution.cpp"

#include <iostream>

using namespace std;

Solution sol;

void testCase(int id, vector<vector<int>> grid, int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result:" << sol.gridGame(grid) << endl;
}

int main()
{
  testCase(1, {{2, 5, 4}, {1, 5, 1}}, 4);
  testCase(1, {{3, 3, 1}, {8, 5, 2}}, 4);
  testCase(1, {{1, 3, 1, 15}, {1, 3, 3, 1}}, 7);
}