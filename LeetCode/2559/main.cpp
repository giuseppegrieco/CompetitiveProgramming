#include "solution.cpp"
#include <iostream>
#include <vector>

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

void testCase(int id, vector<string> words, vector<vector<int>> queries, vector<int> expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << formatList(expectedResult) << endl;
  cout << "Result: " << formatList(sol.vowelStrings(words, queries)) << endl;
}

int main()
{
  testCase(1, {"aba", "bcb", "ece", "aa", "e"}, {{0, 2}, {1, 4}, {1, 1}}, {2, 3, 0});
  testCase(1, {"a", "e", "i"}, {{0, 2}, {0, 1}, {2, 2}}, {3, 2, 1});
  return 0;
}
