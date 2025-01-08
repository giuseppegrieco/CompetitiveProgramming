#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int maxScore(string s)
  {
    uint n = s.size();
    vector<vector<uint>> sum(2, vector<uint>(s.size(), 0));
    sum[s[0] - '0'][0] = 1;

    for (int i = 1; i < n; i++)
    {
      sum[s[i] - '0'][i] = sum[s[i] - '0'][i - 1] + 1;
      sum[(s[i] - '0' + 1) % 2][i] = sum[(s[i] - '0' + 1) % 2][i - 1];
    }

    int ans = 0, c;
    for (int i = 1; i < n; i++)
    {
      c = sum[0][i - 1] + (sum[1][n - 1] - sum[1][i - 1]);
      ans = max(ans, c);
    }

    return ans;
  }
};