#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id, vector<vector<char>> grid, int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.numIslands(grid) << endl;
}

int main()
{
  testCase(1, {{'1', '1', '1', '1', '0'}, {'1', '1', '0', '1', '0'}, {'1', '1', '0', '0', '0'}, {'0', '0', '0', '0', '0'}}, 1);
  testCase(2, {{'1', '1', '0', '0', '0'}, {'1', '1', '0', '0', '0'}, {'0', '0', '1', '0', '0'}, {'0', '0', '0', '1', '1'}}, 3);
  return 0;
}
