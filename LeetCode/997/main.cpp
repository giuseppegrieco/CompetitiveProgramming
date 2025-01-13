#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id,
              int n,
              vector<vector<int>> trust,
              int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.findJudge(n, trust) << endl;
}

int main()
{
  testCase(2, 3, {{1, 3}, {2, 3}}, 3);
  testCase(1, 2, {{1, 2}}, 2);
  testCase(3, 3, {{1, 3}, {2, 3}, {3, 1}}, -1);
  return 0;
}
