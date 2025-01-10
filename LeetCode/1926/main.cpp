#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id,
              vector<vector<char>> maze,
              vector<int> entrance,
              int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.nearestExit(maze, entrance) << endl;
}

int main()
{
  testCase(1, {{'+', '+', '.', '+'}, {'.', '.', '.', '+'}, {'+', '+', '+', '.'}}, {1, 2}, 1);
  testCase(2, {{'+', '+', '+'}, {'.', '.', '.'}, {'+', '+', '+'}}, {1, 0}, 2);
  testCase(2, {{'.', '+'}}, {0, 0}, -1);
  return 0;
}
