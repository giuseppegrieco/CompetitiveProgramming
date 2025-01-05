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

void testCase(int id, vector<vector<int>> graph, vector<int> expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << formatList(expectedResult) << endl;
  cout << "Result: " << formatList(sol.eventualSafeNodes(graph)) << endl;
}

int main()
{
  testCase(1, {{1, 2}, {2, 3}, {5}, {0}, {5}, {}, {}}, {2, 4, 5, 6});
  testCase(2, {{1, 2, 3, 4}, {1, 2}, {3, 4}, {0, 4}, {}}, {4});
  testCase(3, {{}, {0, 2, 3, 4}, {3}, {4}, {}}, {0, 1, 2, 3, 4});
  return 0;
}
