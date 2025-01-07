#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

class Solution
{
public:
  vector<string> stringMatching(vector<string> &words)
  {
    unordered_set<string> ans;
    for (uint i = 0; i < words.size(); i++)
    {
      for (uint j = 0; j < words.size(); j++)
      {
        if (words[j].size() >= words[i].size())
        {
          if (i != j && words[j].find(words[i]) <= words[j].size())
          {
            ans.insert(words[i]);
          }
        }
      }
    }
    return vector<string>(ans.begin(), ans.end());
  }
};