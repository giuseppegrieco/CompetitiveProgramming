#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

string formatMat(vector<vector<int>> m)
{
  string ans = "{";
  for (int i = 0; i < m.size(); i++)
  {
    ans += "{";
    for (int j = 0; j < m[0].size(); j++)
    {
      ans += to_string(m[i][j]) + ", ";
    }
    ans = ans.substr(0, ans.size() - 2);
    ans += "}, ";
  }
  ans = ans.substr(0, ans.size() - 2);
  return ans + "}";
}

void testCase(int id,
              vector<vector<int>> isWater,
              vector<vector<int>> expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << formatMat(expectedResult) << endl;
  cout << "Result: " << formatMat(sol.highestPeak(isWater)) << endl;
}

int main()
{
  testCase(1, {{0, 1}, {0, 0}}, {{1, 0}, {2, 1}});
  testCase(2, {{0, 0, 1}, {1, 0, 0}, {0, 0, 0}}, {{1, 1, 0}, {0, 1, 1}, {1, 2, 2}});
  return 0;
}
