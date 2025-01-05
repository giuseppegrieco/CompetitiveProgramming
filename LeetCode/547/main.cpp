#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id, vector<vector<int>> isConnected, uint expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.findCircleNum(isConnected) << endl;
}

int main()
{
  testCase(1, {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}}, 2);
  testCase(2, {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}}, 3);
  return 0;
}
