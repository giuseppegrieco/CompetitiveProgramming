#include "solution.cpp"

#include <iostream>

using namespace std;

Solution sol;

void testCase(int id, vector<int> nums, int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result:" << sol.waysToSplitArray(nums) << endl;
}

int main()
{
  testCase(1, {10, 4, -8, 7}, 2);
  testCase(2, {2, 3, 1, 0}, 2);
  testCase(3, {0, 0}, 1);
  testCase(4, {9, 9, 9}, 1);
  testCase(5, {6, -1, 9}, 0);
  testCase(6, {10, 4, -8, 7}, 2);
}