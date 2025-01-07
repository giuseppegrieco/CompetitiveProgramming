#include <bits/stdc++.h>

using namespace std;

class Solution
{
private:
  bool isVowel(char ch)
  {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
  }

  int eval(string s)
  {
    return isVowel(s[0]) && isVowel(s[s.size() - 1]) ? 1 : 0;
  }

public:
  vector<int> vowelStrings(vector<string> &words, vector<vector<int>> &queries)
  {
    uint q = queries.size();
    uint w = words.size();

    vector<int> sum(w + 1);
    sum[0] = 0;
    for (uint i = 0; i < w; i++)
    {
      sum[i + 1] = sum[i] + eval(words[i]);
    }

    vector<int> ans(q);
    for (uint i = 0; i < q; i++)
    {
      ans[i] = sum[queries[i][1] + 1] - sum[queries[i][0]];
    }

    return ans;
  }
};