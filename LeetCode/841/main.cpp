#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id, vector<vector<int>> rooms, bool expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.canVisitAllRooms(rooms) << endl;
}

int main()
{
  testCase(1, {{1}, {2}, {3}, {}}, true);
  testCase(2, {{1, 3}, {3, 0, 1}, {2}, {0}}, false);
  return 0;
}
