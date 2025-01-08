#include "solution.cpp"
#include <iostream>
#include <vector>

using namespace std;

Solution sol;

void testCase(int id, string s, int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.equalDigitFrequency(s) << endl;
}

int main() {
  testCase(1, "1212", 5);
  testCase(2, "12321", 9);
  return 0;
}