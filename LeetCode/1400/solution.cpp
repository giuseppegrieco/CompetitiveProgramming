#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  bool canConstruct(string s, int k)
  {
    if (k == s.size())
    {
      return true;
    }
    if (k > s.size())
    {
      return false;
    }

    vector<uint> f(26, 0);
    for (char &c : s)
    {
      f[c - 'a']++;
    }
    uint odd = 0;
    for (uint i = 0; i < 26; i++)
    {
      if (f[i] % 2 == 1)
      {
        odd++;
      }
    }
    return odd <= k;
  }
};