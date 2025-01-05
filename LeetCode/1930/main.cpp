#include "solution.cpp"

#include <iostream>

using namespace std;

Solution sol;

void testCase(int id, string s, int expectedResult) {
  cout << "Test case " << id << ": " << s << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result:" << sol.countPalindromicSubsequence(s) << endl;
}

int main()
{
  testCase(1, "aabca", 3);
  testCase(2, "adc", 0);
  testCase(3, "bbcbaba", 4);
}