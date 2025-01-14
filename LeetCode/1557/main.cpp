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
              int n,
              vector<vector<int>> edges,
              vector<int> expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << formatList(expectedResult) << endl;
  cout << "Result: " << formatList(sol.findSmallestSetOfVertices(n, edges)) << endl;
}

int main()
{
  testCase(1, 6, {{0, 1}, {0, 2}, {2, 5}, {3, 4}, {4, 2}}, {0, 3});
  testCase(2, 5, {{0, 1}, {2, 1}, {3, 1}, {1, 4}, {2, 4}}, {0, 2, 3});

  return 0;
}
