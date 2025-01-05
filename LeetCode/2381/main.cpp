#include "solution.cpp"
#include <iostream>
#include <vector>

using namespace std;

Solution sol;

void testCase(int id, string s, vector<vector<int>> shifts, string expectedResult)
{
  cout << "Test case " << id << ": " << s << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.shiftingLetters(s, shifts) << endl;
}

int main() {
  testCase(1, "abc", {{0, 1, 0}, {1, 2, 1}, {0, 2, 1}}, "ace");
  testCase(2, "dztz", {{0, 0, 0}, {1, 1, 1}}, "catz");
  return 0;
}
