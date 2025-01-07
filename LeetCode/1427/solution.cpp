#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  string stringShift(string s, vector<vector<int>> &shift)
  {
    int ls = 0, rs = 0;
    for (auto &s : shift)
    {
      if (s[0] == 0)
      {
        ls += s[1];
      }
      else
      {
        rs += s[1];
      }
    }

    int n = s.length();
    if (ls > rs)
    {
      ls = (ls - rs) % n;
      s = s.substr(ls) + s.substr(0, ls);
    }
    else if (rs > ls)
    {
      rs = (rs - ls) % n;
      s = s.substr(n - rs) + s.substr(0, n - rs);
    }
    return s;
  }
};