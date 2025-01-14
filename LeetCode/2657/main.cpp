#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

string formatList(vector<int> v)
{
  string ans;
  for (int i = 0; i < v.size(); i++)
  {
    ans += to_string(v[i]) + ", ";
  }
  return ans.substr(0, ans.size() - 2);
}

void testCase(int id,
              vector<int> A,
              vector<int> B,
              vector<int> expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << formatList(expectedResult) << endl;
  cout << "Result: " << formatList(sol.findThePrefixCommonArray(A, B)) << endl;
}

int main()
{
  testCase(1, {1, 3, 2, 4}, {3, 1, 2, 4}, {0, 2, 3, 4});
  testCase(2, {2, 3, 1}, {3, 1, 2}, {0, 1, 3});
  return 0;
}
