#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

string formatList(vector<string> v)
{
  string ans;
  for (int i = 0; i < v.size(); i++)
  {
    ans += v[i] + ", ";
  }
  return ans.substr(0, ans.size() - 2);
}

void testCase(int id,
              vector<string> words,
              vector<string> expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << formatList(expectedResult) << endl;
  cout << "Result: " << formatList(sol.stringMatching(words)) << endl;
}

int main()
{
  testCase(1, {"mass", "as", "hero", "superhero"}, {"hero", "as"});
  testCase(2, {"leetcode", "et", "code"}, {"code", "et"});
  testCase(3, {"mass", "as", "hero", "superhero"}, {"hero", "as"});
  return 0;
}
