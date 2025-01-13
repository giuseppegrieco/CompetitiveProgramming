#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id, string s, uint expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.minimumLength(s) << endl;
}

int main()
{
  testCase(1, "abaacbcbb", 5);
  testCase(2, "aa", 2);
  return 0;
}
