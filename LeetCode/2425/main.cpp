#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id,
              vector<int> nums1,
              vector<int> nums2,
              int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.xorAllNums(nums1, nums2) << endl;
}

int main()
{
  testCase(1, {2, 1, 3}, {10, 2, 5, 0}, 13);
  testCase(2, {1, 2}, {3, 4}, 0);
  return 0;
}
