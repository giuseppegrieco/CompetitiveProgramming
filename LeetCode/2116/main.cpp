#include "solution.cpp"

#include <iostream>

using namespace std;

Solution sol;

void testCase(int id, string s, string locked, bool expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result:" << sol.canBeValid(s, locked) << endl;
}

int main()
{
  testCase(1, "))()))", "010100", true);
  testCase(2, "()()", "0000", true);
  testCase(3, ")", "0", false);
}