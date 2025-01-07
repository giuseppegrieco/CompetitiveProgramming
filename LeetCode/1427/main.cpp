#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id,
              string s,
              vector<vector<int>> shift,
              string expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.stringShift(s, shift) << endl;
}

int main()
{
  testCase(1, "abc", {{0, 1}, {1, 2}}, "cab");
  testCase(2, "abcdefg", {{1, 1}, {1, 1}, {0, 2}, {1, 3}}, "efgabcd");
  testCase(3, "wpdhhcj", {{0, 7}, {1, 7}, {1, 0}, {1, 3}, {0, 3}, {0, 6}, {1, 2}}, "hcjwpdh");
  return 0;
}
