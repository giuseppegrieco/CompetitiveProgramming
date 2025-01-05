#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  string shiftingLetters(string s, vector<vector<int>> &shifts)
  {
    vector<int> psum(s.size() + 1, 0);
    for (uint i = 0; i < shifts.size(); i++)
    {
      int shift = shifts[i][2] == 1 ? 1 : 25;
      psum[shifts[i][0]] += shift;
      psum[shifts[i][1] + 1] -= shift;
    }
    for (uint i = 1; i < s.size(); i++)
    {
      psum[i] = psum[i - 1] + psum[i];
    }
    string ans = s;
    for (uint i = 0; i < s.size(); i++)
    {
      ans[i] = 'a' + ((s[i] - 'a' + psum[i]) % 26);
    }
    return ans;
  }
};