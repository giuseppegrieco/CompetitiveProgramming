#include "solution.cpp"
#include <iostream>
#include <vector>

using namespace std;

Solution sol;

void testCase(int id, string s, int numRows, string expectedResult)
{
  cout << "Test case " << id << ": " << s << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.convert(s, numRows) << endl;
}

int main() {
  testCase(1, "PAYPALISHIRING", 3, "PAHNAPLSIIGYIR");
  testCase(2, "PAYPALISHIRING", 4, "PINALSIGYAHRPI");
  testCase(3, "A", 1, "A");
  testCase(4, "AB", 1, "AB");
  return 0;
}
