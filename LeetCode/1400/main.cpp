#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id,
              string s,
              int k,
              bool expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.canConstruct(s, k) << endl;
}

int main()
{
  testCase(1, "annabelle", 2, true);
  testCase(1, "leetcode", 3, false);
  testCase(1, "true", 4, true);
  return 0;
}
