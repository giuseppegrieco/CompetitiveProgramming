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

void testCase(int id, vector<string> words1, vector<string> words2, vector<string> expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << formatList(expectedResult) << endl;
  cout << "Result: " << formatList(sol.wordSubsets(words1, words2)) << endl;
}

int main()
{
  testCase(1, {"amazon","apple","facebook","google","leetcode"}, {"e","o"}, {"facebook","google","leetcode"});
  testCase(2, {"amazon","apple","facebook","google","leetcode"}, {"l","e"}, {"apple","google","leetcode"});
  return 0;
}
