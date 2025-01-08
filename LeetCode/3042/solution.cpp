#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int countPrefixSuffixPairs(vector<string> &words)
  {
    int n = words.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        string &a = words[i];
        string &b = words[j];
        ans += b.size() >= a.size() && b.substr(0, a.size()) == a && b.substr(b.size() - a.size()) == a;
      }
    }
    return ans;
  }
};