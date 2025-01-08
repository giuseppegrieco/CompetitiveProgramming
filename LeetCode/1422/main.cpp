#include "solution.cpp"
#include <iostream>
#include <vector>

using namespace std;

Solution sol;

void testCase(int id, string s, int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.maxScore(s) << endl;
}

int main() {
  testCase(1, "011101", 5);
  testCase(2, "00111", 5);
  testCase(3, "1111", 3);
  return 0;
}