#include "solution.cpp"
#include <iostream>

using namespace std;

Solution sol;

void testCase(int id, string startGene, string endGene, vector<string> bank, int expectedResult)
{
  cout << "Test case " << id << endl;
  cout << "Expected: " << expectedResult << endl;
  cout << "Result: " << sol.minMutation(startGene, endGene, bank) << endl;
}

int main()
{
  testCase(1, "AACCGGTT", "AACCGGTA", {"AACCGGTA"}, 1);
  testCase(2, "AACCGGTT", "AAACGGTA", {"AACCGGTA", "AACCGCTA", "AAACGGTA"}, 2);
  return 0;
}
