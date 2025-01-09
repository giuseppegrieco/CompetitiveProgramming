#include "solution.cpp"
#include <iostream>
#include <vector>

using namespace std;

Solution sol;

void testCase(int id, vector<string> words, string pref, int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.prefixCount(words, pref) << endl;
}

int main()
{
  testCase(1, {"pay", "attention", "practice", "attend"}, "at", 2);
  testCase(2, {"leetcode", "win", "loops", "success"}, "code", 0);
  return 0;
}