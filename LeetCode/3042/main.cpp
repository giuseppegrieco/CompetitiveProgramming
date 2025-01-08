#include "solution.cpp"
#include <iostream>
#include <vector>

using namespace std;

Solution sol;

void testCase(int id, vector<string> words, int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.countPrefixSuffixPairs(words) << endl;
}

int main() {
  testCase(1, {"a","aba","ababa","aa"}, 4);
  testCase(2, {"pa","papa","ma","mama"}, 2);
  testCase(3, {"abab","ab"}, 0);
  return 0;
}
