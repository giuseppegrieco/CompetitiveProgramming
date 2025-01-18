#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id,
              vector<int> derived,
              bool expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.doesValidArrayExist(derived) << endl;
}

int main()
{
  testCase(1, {1, 1, 0}, true);
  testCase(2, {1, 1}, true);
  testCase(3, {1, 0}, false);
  return 0;
}
