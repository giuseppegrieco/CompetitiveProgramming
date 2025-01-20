#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id, vector<vector<int>> heightMap, int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.trapRainWater(heightMap) << endl;
}

int main()
{
  testCase(1, {{1, 4, 3, 1, 3, 2}, {3, 2, 1, 3, 2, 4}, {2, 3, 3, 2, 3, 1}}, 4);
  testCase(2, {{3, 3, 3, 3, 3}, {3, 2, 2, 2, 3}, {3, 2, 1, 2, 3}, {3, 2, 2, 2, 3}, {3, 3, 3, 3, 3}}, 10);
  return 0;
}
