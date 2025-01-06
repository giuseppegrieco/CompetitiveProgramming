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

void testCase(int id, string boxes, vector<int> expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << formatList(expectedResult) << endl;
  cout << "Result: " << formatList(sol.minOperations(boxes)) << endl;
}

int main()
{
  testCase(1, "110", {1, 1, 3});
  testCase(2, "001011", {11, 8, 5, 4, 3, 4});
  return 0;
}
