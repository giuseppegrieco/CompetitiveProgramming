#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id,
              vector<int> arr,
              vector<vector<int>> mat,
              int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.firstCompleteIndex(arr, mat) << endl;
}

int main()
{
  testCase(1, {1, 3, 4, 2}, {{1, 4}, {2, 3}}, 2);
  testCase(2, {2, 8, 7, 4, 1, 3, 5, 6, 9}, {{3, 2, 5}, {1, 4, 6}, {8, 7, 9}}, 3);
  return 0;
}
