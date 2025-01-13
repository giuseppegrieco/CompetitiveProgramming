#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int minimumLength(string s)
  {
    uint n = s.size();
    vector<uint> f(26, 0);

    for (char &c : s)
    {
      f[c - 'a']++;
    }

    uint ans = n;
    for (uint i = 0; i < 26; i++)
    {
      ans -= f[i] > 0 ? f[i] - (1 + (f[i] % 2 == 0)) : 0;
    }

    return ans;
  }
};