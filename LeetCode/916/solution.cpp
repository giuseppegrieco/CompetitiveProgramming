#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
  {
    vector<uint> target(26, 0);
    vector<uint> current(26, 0);
    for (string &word : words2)
    {
      for (char &c : word)
      {
        current[c - 'a']++;
      }
      for (uint i = 0; i < 26; i++)
      {
        target[i] = max(current[i], target[i]);
        current[i] = 0;
      }
    }

    vector<string> ans;
    bool isUniversal = true;
    for (string &word : words1)
    {
      for (char &c : word)
      {
        current[c - 'a']++;
      }
      for (uint i = 0; i < 26; i++)
      {
        if (current[i] < target[i])
        {
          isUniversal = false;
        }
        current[i] = 0;
      }
      if (isUniversal)
      {
        ans.push_back(word);
      }
      isUniversal = true;
    }

    return ans;
  }
};