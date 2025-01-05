#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

class Solution
{
public:
  int countPalindromicSubsequence(string s)
  {
    uint b[26], e[26], c[26];
    for (unsigned short i = 0; i < 26; i++)
    {
      b[i] = 0;
      e[i] = 0;
      c[i] = 0;
    }

    for (uint i = 0; i < s.size(); i++)
    {
      unsigned short idx = tolower(s[i]) - 'a';
      if (c[idx] == 0)
      {
        b[idx] = i;
      }
      e[idx] = i;
      c[idx]++;
    }

    uint ans = 0;
    for (unsigned short i = 0; i < 26; i++)
    {
      unordered_set<unsigned short> c;
      for (uint j = b[i] + 1; j < e[i]; j++)
      {
        c.insert(tolower(s[j]) - 'a');
      }
      ans += c.size();
    }

    return ans;
  }
};