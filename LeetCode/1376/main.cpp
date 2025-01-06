#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id,
              int n,
              int headID,
              vector<int> manager,
              vector<int> informTime,
              int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.numOfMinutes(n, headID, manager, informTime) << endl;
}

int main()
{
  testCase(1, 1, 0, {-1}, {0}, 0);
  testCase(2, 6, 2, {2, 2, -1, 2, 2, 2}, {0, 0, 1, 0, 0, 0}, 1);
  return 0;
}
