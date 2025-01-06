#include "solution.cpp"
#include <iostream>
#include <vector>

using namespace std;

Solution sol;

void testCase(int id, vector<int> nums, int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.maxLength(nums) << endl;
}

int main()
{
  testCase(1, {1, 2, 1, 2, 1, 1, 1}, 5);
  testCase(2, {2, 3, 4, 5, 6}, 3);
  testCase(2, {1, 2, 3, 1, 4, 5, 1}, 5);
  return 0;
}
