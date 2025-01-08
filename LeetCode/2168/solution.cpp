#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

class Solution
{
public:
  int equalDigitFrequency(string s)
  {
    vector<int> f(10, 0);
    unordered_set<string> ans;

    for (uint i = 0; i < s.size(); i++)
    {
      for (uint j = i; j < s.size(); j++)
      {
        f[s[j] - '0']++;

        uint c = 0, k;
        for (k = 0; k < f.size(); k++)
        {
          if (f[k] == 0)
            continue;

          if (c == 0)
            c = f[k];

          if (c != f[k])
          {
            break;
          }
        }
        if (k == f.size())
        {
          ans.insert(s.substr(i, j - i + 1));
        }
      }
      for (uint k = 0; k < f.size(); k++)
      {
        f[k] = 0;
      }
    }

    return ans.size();
  }
};