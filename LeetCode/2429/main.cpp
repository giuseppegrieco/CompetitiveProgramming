#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id, int num1, int num2, int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.minimizeXor(num1, num2) << endl;
}

int main()
{
  testCase(1, 3, 5, 3);
  testCase(2, 1, 12, 3);
  return 0;
}
